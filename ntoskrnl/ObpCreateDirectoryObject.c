/*
 * XREFs of ObpCreateDirectoryObject @ 0x14073DED0
 * Callers:
 *     NtCreateDirectoryObjectEx @ 0x14073DE90 (NtCreateDirectoryObjectEx.c)
 *     NtCreateDirectoryObject @ 0x14073DEB0 (NtCreateDirectoryObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlIsSandboxedToken @ 0x140741410 (RtlIsSandboxedToken.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObpCreateDirectoryObject(__int64 a1, __int64 a2, int a3, void *a4, int a5)
{
  unsigned __int64 v6; // rdx
  PVOID v7; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  int v9; // r14d
  int inserted; // edi
  _QWORD *v11; // rdi
  int v12; // r12d
  int v13; // edx
  int v14; // eax
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  PVOID v17; // [rsp+58h] [rbp-40h]
  __int64 v18[7]; // [rsp+60h] [rbp-38h] BYREF
  _QWORD *v19; // [rsp+A0h] [rbp+8h]

  v19 = (_QWORD *)a1;
  v6 = a1;
  v18[0] = 0LL;
  v17 = 0LL;
  v7 = 0LL;
  Object = 0LL;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_26;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = a5 & 2;
    if ( (a5 & 2) == 0 )
    {
      a1 = 0x7FFFFFFF0000LL;
      if ( v6 < 0x7FFFFFFF0000LL )
        a1 = v6;
      *(_QWORD *)a1 = *(_QWORD *)a1;
      goto LABEL_4;
    }
LABEL_26:
    inserted = -1073741581;
    goto LABEL_12;
  }
  v9 = a5 & 2;
LABEL_4:
  if ( !a4
    || (Object = 0LL,
        inserted = ObReferenceObjectByHandle(a4, 3u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL),
        v7 = Object,
        inserted >= 0) )
  {
    LOBYTE(a4) = PreviousMode;
    LOBYTE(a1) = PreviousMode;
    inserted = ObCreateObjectEx(a1, (_DWORD)ObpDirectoryObjectType, a3, (_DWORD)a4);
    if ( inserted >= 0 )
    {
      v11 = v17;
      memset(v17, 0, 0x158uLL);
      v11[37] = 0LL;
      *((_DWORD *)v11 + 85) = -1;
      v12 = 0;
      if ( v7 )
      {
        v12 = 4;
        v11[39] = v7;
        v7 = 0LL;
        Object = 0LL;
        if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
          v12 = 20;
      }
      v13 = v12 | 8;
      if ( (a5 & 1) == 0 )
        v13 = v12;
      v14 = v13 | 0x20;
      if ( !v9 )
        v14 = v13;
      *((_DWORD *)v11 + 84) |= v14;
      inserted = ObInsertObjectEx(v11, 0LL, 0, 0LL, (__int64)v18);
      v17 = 0LL;
      *v19 = v18[0];
    }
  }
LABEL_12:
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v17 )
    ObfDereferenceObject(v17);
  return (unsigned int)inserted;
}
