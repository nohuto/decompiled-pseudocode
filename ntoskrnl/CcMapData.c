/*
 * XREFs of CcMapData @ 0x1406A7910
 * Callers:
 *     <none>
 * Callees:
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x14021FB80 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x14021FF20 (CcMapAndRead.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 */

BOOLEAN __stdcall CcMapData(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  char v8; // di
  ULONG v9; // r9d
  unsigned int v10; // eax
  __int64 *v11; // rsi
  ULONG v12; // ebx
  BOOLEAN result; // al
  int v14; // [rsp+54h] [rbp-34h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v16[5]; // [rsp+60h] [rbp-28h] BYREF

  v8 = 0;
  v16[0] = 0LL;
  v15 = 0LL;
  v9 = Flags & 1;
  if ( v9 )
    v10 = 33872;
  else
    v10 = 33868;
  __incgsdword(v10);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  if ( v9 )
  {
    v11 = (__int64 *)Buffer;
    *Buffer = (PVOID)CcGetVirtualAddress(
                       (__int64)FileObject->SectionObjectPointer->SharedCacheMap,
                       FileOffset->QuadPart,
                       &v15,
                       &v14,
                       (Flags >> 6) & 1,
                       0);
  }
  else
  {
    v11 = (__int64 *)Buffer;
    result = CcPinFileData(
               (__int64)FileObject,
               (__int64 *)FileOffset,
               Length,
               1,
               0,
               Flags,
               (ULONG_PTR *)&v15,
               Buffer,
               v16);
    if ( !result )
    {
      __incgsdword(0x848Cu);
      return result;
    }
  }
  if ( (Flags & 0x10) == 0 )
  {
    v12 = Flags & 0x100;
    if ( v12 )
    {
      v8 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
      BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    }
    CcMapAndRead(Length, 0, 1, *v11);
    if ( v12 )
      BYTE5(KeGetCurrentThread()[1].Queue) = v8 - 2;
  }
  __addgsdword(0x8490u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  *Bcb = (PVOID)(v15 + 1);
  return 1;
}
