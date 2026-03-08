/*
 * XREFs of PnpAddVetoInformation @ 0x140961004
 * Callers:
 *     PnpCollectOpenHandlesCallBack @ 0x1409611F0 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpAddVetoInformation(PVOID Object, _QWORD *a2, unsigned int a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  char v8; // dl
  __int64 v9; // r9
  _QWORD *v10; // rax
  PVOID *v11; // rcx
  _QWORD *v12; // rax
  __int64 Pool2; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rsi
  _QWORD *v17; // rax
  _QWORD *v18; // rcx

  v4 = 0LL;
  v5 = 0LL;
  v8 = 1;
  v9 = *a2 - 24LL;
  if ( a2 == (_QWORD *)*a2 )
    goto LABEL_15;
  while ( 1 )
  {
    if ( *(_DWORD *)(v9 + 16) == a3 )
    {
      v10 = *(_QWORD **)v9;
      v5 = (_QWORD *)v9;
      v8 = 0;
      while ( 1 )
      {
        v11 = (PVOID *)(v10 - 1);
        if ( (_QWORD *)v9 == v10 )
          goto LABEL_11;
        if ( *v11 == Object )
          return;
        if ( *v11 > Object )
        {
          v5 = v10;
          goto LABEL_11;
        }
        v10 = (_QWORD *)*v10;
      }
    }
    if ( *(_DWORD *)(v9 + 16) > a3 )
      break;
LABEL_11:
    v12 = *(_QWORD **)(v9 + 24);
    v9 = (__int64)(v12 - 3);
    if ( a2 == v12 )
      goto LABEL_14;
  }
  a2 = (_QWORD *)(v9 + 24);
LABEL_14:
  if ( v8 )
  {
LABEL_15:
    Pool2 = ExAllocatePool2(256LL, 40LL, 1332768336LL);
    v4 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 16) = a3;
      v14 = (_QWORD *)(Pool2 + 24);
      v15 = (_QWORD *)a2[1];
      if ( (_QWORD *)*v15 == a2 )
      {
        *v14 = a2;
        v5 = v4;
        v14[1] = v15;
        *v15 = v14;
        a2[1] = v14;
        v4[1] = v4;
        *v4 = v4;
        goto LABEL_18;
      }
LABEL_24:
      __fastfail(3u);
    }
  }
  else
  {
LABEL_18:
    v16 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1349545552LL);
    if ( v16 )
    {
      ObfReferenceObject(Object);
      *v16 = Object;
      v17 = v16 + 1;
      v18 = (_QWORD *)v5[1];
      if ( (_QWORD *)*v18 != v5 )
        goto LABEL_24;
      *v17 = v5;
      v16[2] = v18;
      *v18 = v17;
      v5[1] = v17;
    }
    else if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x4F706E50u);
    }
  }
}
