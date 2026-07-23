/*
 * XREFs of RtlpOpenImageFileOptionsKeyEx @ 0x140604234
 * Callers:
 *     RtlOpenImageFileOptionsKey @ 0x140619680 (RtlOpenImageFileOptionsKey.c)
 *     SepIsImageInMinTcbList @ 0x1406F1984 (SepIsImageInMinTcbList.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x140604364 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406043E4 (RtlpProcessIFEOKeyFilter.c)
 */

__int64 __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4)
{
  unsigned int v4; // r8d
  __int64 v6; // rax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  bool v10; // r15
  __int64 result; // rax
  HANDLE v12; // r14
  ULONG v13; // eax
  bool v14; // zf
  __int64 v15; // rdx
  NTSTATUS v16; // ebx
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  __int128 i; // [rsp+28h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE v20; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v4 = *a1;
  Handle = 0LL;
  v6 = *((_QWORD *)a1 + 1) + v4;
  KeyHandle = 0LL;
  v8 = v4;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  for ( i = 0LL; v8; v8 -= 2 )
  {
    if ( *(_WORD *)(v6 - 2) == 92 )
      break;
    v6 -= 2LL;
  }
  v9 = v4 - v8;
  *((_QWORD *)&i + 1) = v6;
  LOWORD(i) = v9;
  if ( (unsigned __int16)v9 != v9 )
    return 3221225507LL;
  v10 = RtlpDisableIFEOCaching != 0;
  result = RtlpOpenBaseImageFileOptionsKey(&Handle);
  if ( (int)result >= 0 )
  {
    v12 = Handle;
    v13 = 1600;
    v14 = KeGetCurrentThread()->PreviousMode == 1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    if ( !v14 )
      v13 = 576;
    ObjectAttributes.Attributes = v13;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&i;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenKey(&KeyHandle, 9u, &ObjectAttributes);
    if ( v10 )
      ZwClose(v12);
    if ( v16 >= 0 )
    {
      v20 = KeyHandle;
      v16 = RtlpProcessIFEOKeyFilter(&v20, v15, a1);
      if ( v16 < 0 )
      {
        if ( v20 )
          ZwClose(v20);
      }
      else
      {
        *a4 = v20;
      }
    }
    return (unsigned int)v16;
  }
  return result;
}
