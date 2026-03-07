BOOLEAN __stdcall CcPinRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  _DWORD *SharedCacheMap; // rsi
  PVOID *v10; // r12
  unsigned int v11; // edi
  __int64 v12; // rax
  PVOID *v13; // rbx
  BOOLEAN v15; // [rsp+50h] [rbp-68h]
  PVOID Obcb; // [rsp+58h] [rbp-60h] BYREF
  PVOID *v17; // [rsp+60h] [rbp-58h]
  void *v18; // [rsp+68h] [rbp-50h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+8h] BYREF
  LONGLONG QuadPart; // [rsp+C8h] [rbp+10h] BYREF
  ULONG v21; // [rsp+D0h] [rbp+18h]

  v21 = Length;
  v18 = 0LL;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  Obcb = 0LL;
  v17 = &Obcb;
  __incgsdword(4 * (Flags & 1) + 33880);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v10 = Buffer;
  v11 = v21;
  v12 = v19;
  v13 = v17;
  do
  {
    if ( Obcb )
    {
      if ( v13 == &Obcb )
      {
        Obcb = (PVOID)CcAllocateObcb(FileOffset, v11);
        v13 = (PVOID *)((char *)Obcb + 16);
        v17 = (PVOID *)((char *)Obcb + 16);
        *v10 = v18;
        v12 = v19;
      }
      v11 += QuadPart - v12;
      v21 = v11;
      QuadPart = v12;
      v17 = ++v13;
    }
    if ( !(unsigned __int8)CcPinFileData(
                             (__int64)FileObject,
                             &QuadPart,
                             v11,
                             (SharedCacheMap[38] & 0x200) == 0,
                             0,
                             Flags,
                             (ULONG_PTR *)v13,
                             &v18,
                             &v19) )
    {
      __incgsdword(0x8494u);
      v15 = 0;
      goto LABEL_12;
    }
    v12 = v19;
  }
  while ( v19 - QuadPart < v11 );
  *Bcb = Obcb;
  if ( v13 == &Obcb )
    *v10 = v18;
  v15 = 1;
LABEL_12:
  __addgsdword(0x8498u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( !v15 && Obcb )
    CcUnpinData(Obcb);
  return v15;
}
