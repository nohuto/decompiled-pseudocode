/*
 * XREFs of ?RemoveAt@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHH@Z @ 0x1800FD2E4
 * Callers:
 *     PubSebUnregisterRpc @ 0x1800FCE3C (PubSebUnregisterRpc.c)
 * Callees:
 *     memmove_0 @ 0x1801177F4 (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1802790F4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  int v3; // r8d
  int v4; // ecx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  void *v10; // rax
  void *v11; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v3 = qword_1803E3288;
  if ( a2 >= (int)qword_1803E3288 )
    return 0LL;
  if ( a2 != (_DWORD)qword_1803E3288 - 1 )
  {
    v4 = qword_1803E3288 - a2;
    v5 = 8LL * ((int)qword_1803E3288 - a2);
    v6 = 8LL * ((int)qword_1803E3288 - a2 - 1);
    v7 = Block + 8 * v2;
    if ( v6 )
    {
      if ( !v7 || v7 == -8 )
        goto LABEL_22;
      if ( v5 < v6 )
      {
LABEL_23:
        *_errno() = 34;
LABEL_24:
        _invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0((void *)(Block + 8 * v2), (const void *)(v7 + 8), 8LL * (v4 - 1));
      v3 = qword_1803E3288;
    }
    v8 = 8LL * (v3 - (int)v2 - 1);
    v9 = *(&Block + 1) + 8 * v2;
    if ( !v8 )
      goto LABEL_14;
    if ( v9 && v9 != -8 )
    {
      if ( 8LL * (v3 - (int)v2) >= v8 )
      {
        memmove_0((void *)(*(&Block + 1) + 8 * v2), (const void *)(v9 + 8), 8LL * (v3 - (int)v2 - 1));
        v3 = qword_1803E3288;
        goto LABEL_14;
      }
      goto LABEL_23;
    }
LABEL_22:
    *_errno() = 22;
    goto LABEL_24;
  }
LABEL_14:
  v10 = _recalloc(Block, v3 - 1, 8uLL);
  if ( v10 || (_DWORD)qword_1803E3288 == 1 )
    Block = v10;
  v11 = _recalloc(*(&Block + 1), (int)qword_1803E3288 - 1, 8uLL);
  if ( v11 || (_DWORD)qword_1803E3288 == 1 )
    *(&Block + 1) = v11;
  result = 1LL;
  LODWORD(qword_1803E3288) = qword_1803E3288 - 1;
  return result;
}
