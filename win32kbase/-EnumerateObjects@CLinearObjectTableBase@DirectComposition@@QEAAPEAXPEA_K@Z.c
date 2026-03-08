/*
 * XREFs of ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C00AA51C
 * Callers:
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C0065DD8 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C0091DA8 (-OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 *     ?OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x1C0091E48 (-OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C00D1020 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void *__fastcall DirectComposition::CLinearObjectTableBase::EnumerateObjects(
        DirectComposition::CLinearObjectTableBase *this,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // r10
  __int64 v5; // r11
  _QWORD *v6; // r8
  unsigned __int64 v7; // rdx

  v2 = *a2;
  v4 = *((_QWORD *)this + 3);
  if ( *a2 >= v4 )
    return 0LL;
  v5 = *((_QWORD *)this + 4);
  v6 = (_QWORD *)(*(_QWORD *)this + v2 * v5);
  while ( 1 )
  {
    v7 = v2++;
    if ( *v6 )
      break;
    v6 = (_QWORD *)((char *)v6 + v5);
    if ( v2 >= v4 )
      return 0LL;
  }
  *a2 = v2;
  return *(void **)(v5 * v7 + *(_QWORD *)this);
}
