/*
 * XREFs of LdrpDispatchUserCallTargetES @ 0x18008CD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LdrpDispatchUserCallTargetES()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r11
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // r10

  v1 = *(_QWORD *)(LdrSystemDllInitBlock.CfgBitMap + 8 * (v0 >> 9));
  v2 = v0 >> 3;
  if ( (v0 & 0xF) != 0 )
  {
    v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _bittest64(&v1, v3) && _bittest64(&v1, v3 | 1) )
      goto LABEL_3;
  }
  else if ( _bittest64(&v1, v2) )
  {
LABEL_3:
    ((void (*)(void))v0)();
    return;
  }
  LdrpHandleInvalidUserCallTarget();
}
