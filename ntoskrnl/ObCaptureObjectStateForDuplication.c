/*
 * XREFs of ObCaptureObjectStateForDuplication @ 0x1407111A4
 * Callers:
 *     AlpcpCaptureHandleAttributeInternal @ 0x140710ED0 (AlpcpCaptureHandleAttributeInternal.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ObReferenceProcessHandleTable @ 0x140711794 (ObReferenceProcessHandleTable.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407118C4 (ObpReferenceProcessObjectByHandle.c)
 *     ObpIncrementHandleCountEx @ 0x1407C1090 (ObpIncrementHandleCountEx.c)
 */

__int64 __fastcall ObCaptureObjectStateForDuplication(
        struct _EX_RUNDOWN_REF *Object,
        __int64 a2,
        int a3,
        char a4,
        char a5,
        __int64 a6)
{
  int v7; // ebx
  int v10; // esi
  __int64 v11; // rax
  int v12; // r9d
  int v13; // r14d
  char *v14; // r14
  bool v15; // zf
  int v16; // r8d
  __int64 v17; // rsi
  int v18; // r12d
  _DWORD *v19; // rax
  int v20; // ebx
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  PVOID Objecta[2]; // [rsp+50h] [rbp-10h] BYREF
  int v25; // [rsp+A8h] [rbp+48h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v7 = a3;
  Objecta[0] = 0LL;
  v10 = a4 & 2;
  if ( (a4 & 2) == 0 && (a3 & 0xCE00000) != 0 )
    return 3221225506LL;
  v11 = ObReferenceProcessHandleTable(Object);
  if ( !v11 )
    return 3221225738LL;
  LOBYTE(v12) = a5;
  v13 = ObpReferenceProcessObjectByHandle(
          a2,
          (_DWORD)Object,
          v11,
          v12,
          1967415887,
          (__int64)Objecta,
          (__int64)&v22,
          (__int64)&v23);
  if ( v13 < 0 )
  {
    ExReleaseRundownProtection_0(Object + 139);
    return (unsigned int)v13;
  }
  if ( (v22 & 4) != 0 )
    LODWORD(v23) = 0;
  v14 = (char *)Objecta[0];
  v15 = v10 == 0;
  v16 = HIDWORD(v22);
  v17 = a6;
  if ( !v15 )
    v7 = HIDWORD(v22);
  v18 = v22 & 4 | 8;
  if ( (a4 & 8) == 0 )
    v18 = v22 & 0xC;
  *(_QWORD *)(a6 + 28) = v23;
  v19 = (_DWORD *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v14 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v14 - 48) >> 8)];
  if ( (v7 & 0xF0000000) != 0 )
  {
    if ( v7 < 0 )
      v7 |= v19[19];
    if ( (v7 & 0x40000000) != 0 )
      v7 |= v19[20];
    if ( (v7 & 0x20000000) != 0 )
      v7 |= v19[21];
    if ( (v7 & 0x10000000) != 0 )
      v7 |= v19[22];
    v7 &= 0xFFFFFFFu;
  }
  v25 = v7 & (v19[23] | 0x1000000);
  if ( (~v16 & v25) != 0 )
  {
    ExReleaseRundownProtection_0(Object + 139);
    ObfDereferenceObjectWithTag(v14, 0x7544624Fu);
    return 3221225506LL;
  }
  v20 = ObpIncrementHandleCountEx(2, (unsigned int)&v25, (_DWORD)Object, (_DWORD)v14, a5, v18, 0LL);
  ExReleaseRundownProtection_0(Object + 139);
  if ( v20 < 0 )
  {
    ObfDereferenceObjectWithTag(v14, 0x7544624Fu);
  }
  else
  {
    *(_DWORD *)(v17 + 24) = v25;
    *(_QWORD *)(v17 + 8) = a2;
    *(_DWORD *)(v17 + 36) = v18;
    ObfReferenceObjectWithTag(Object, 0x7544624Fu);
    *(_QWORD *)v17 = Object;
    *(_QWORD *)(v17 + 16) = v14;
  }
  return (unsigned int)v20;
}
