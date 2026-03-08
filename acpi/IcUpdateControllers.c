/*
 * XREFs of IcUpdateControllers @ 0x1C009F79C
 * Callers:
 *     IrqArbpPrepareForTestOrConflict @ 0x1C009E4D0 (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002180 (memset.c)
 */

void IcUpdateControllers()
{
  __int64 i; // rbx
  int v1; // eax

  if ( IrqLibRealInterruptModel == 1 )
  {
    for ( i = IcListHead; ; i = *(_QWORD *)i )
    {
      if ( &IcListHead == (__int64 *)i )
        return;
      if ( (*(_DWORD *)(i + 28) & 4) == 0 )
      {
        v1 = (*(__int64 (__fastcall **)(_QWORD))(PmHalDispatchTable + 64))(*(unsigned int *)(i + 16));
        if ( v1 )
        {
          if ( *(int *)(i + 28) >= 0 )
          {
            if ( !BYTE2(v1) && !(_BYTE)v1 )
            {
              *(_DWORD *)(i + 20) = 0;
              *(_DWORD *)(i + 28) = 0x80000000;
              goto LABEL_12;
            }
          }
          else if ( BYTE2(v1) || (_BYTE)v1 )
          {
            *(_DWORD *)(i + 28) = 0;
            *(_DWORD *)(i + 20) = *(_DWORD *)(i + 16) + BYTE2(v1);
LABEL_12:
            memset((void *)(i + 32), 0, 200LL * *(unsigned int *)(i + 24));
            continue;
          }
        }
      }
    }
  }
}
