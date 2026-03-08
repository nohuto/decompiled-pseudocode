/*
 * XREFs of _lambda_11de8ce1c68e57a9e4c3213d43d7ad85_::operator() @ 0x1C0262BC8
 * Callers:
 *     ?EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005C2EC (-EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_11de8ce1c68e57a9e4c3213d43d7ad85_::operator()(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // r8d
  int v4; // eax
  _DWORD *v5; // r8
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *a1;
  *a2 = 13;
  v3 = *(_DWORD *)(v2 + 32);
  v4 = 0;
  a2[1] = v3;
  v5 = (_DWORD *)a1[1];
  if ( *(_QWORD *)v5 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
    if ( v6 )
      v4 = *(_DWORD *)(v6 + 32);
  }
  a2[2] = v4;
  a2[3] = v5[2];
  result = (unsigned int)v5[3];
  a2[4] = result;
  return result;
}
