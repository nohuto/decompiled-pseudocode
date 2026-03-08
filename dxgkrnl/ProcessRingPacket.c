/*
 * XREFs of ProcessRingPacket @ 0x1C0362950
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C036234C (-ProcessPacket@DXGVMBUSCHANNEL@@QEAAJIPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

__int64 __fastcall ProcessRingPacket(__int64 a1, struct VMBPACKETCOMPLETION__ *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rax

  if ( a4 <= 8
    || (v8 = ((__int64 (*)(void))qword_1C013CE58)()) == 0
    || *(_BYTE *)(v8 + 28)
    || (result = DXGVMBUSCHANNEL::ProcessPacket((struct _EX_RUNDOWN_REF *)v8, *a3, a2, a3, a4), (int)result < 0) )
  {
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304482) )
    {
      v10 = ((__int64 (__fastcall *)(__int64))qword_1C013CE58)(a1);
      if ( v10 )
        *(_BYTE *)(v10 + 28) = 1;
    }
    return ((__int64 (__fastcall *)(struct VMBPACKETCOMPLETION__ *, _QWORD, _QWORD))qword_1C013CE98)(a2, 0LL, 0LL);
  }
  return result;
}
