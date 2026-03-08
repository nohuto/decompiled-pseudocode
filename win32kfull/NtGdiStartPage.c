/*
 * XREFs of NtGdiStartPage @ 0x1C027B830
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0050D28 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C007FBAC (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1C0279028 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0279074 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C027A2E4 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C027A344 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // edi
  Gre::Base *v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rbx
  _QWORD v7[2]; // [rsp+20h] [rbp-10h] BYREF
  XDCOBJ *v8; // [rsp+58h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v7)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
LABEL_17:
    v3 = (Gre::Base *)v7[0];
    goto LABEL_18;
  }
  v3 = (Gre::Base *)v7[0];
  v4 = *(_QWORD *)(v7[0] + 496LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v7[0] + 48LL);
    if ( *(_QWORD *)(v5 + 2536) )
    {
      if ( (*(_DWORD *)(v5 + 40) & 0x8000) != 0 )
      {
        v8 = (XDCOBJ *)v7;
        if ( (*(_DWORD *)(v7[0] + 44LL) & 2) != 0 )
        {
          XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v7);
          *(_DWORD *)(v7[0] + 44LL) &= ~2u;
        }
        if ( (!UmpdSecurityGateNoUmpdObj(v3) || *(_QWORD *)(v5 + 2928))
          && (v2 = (*(__int64 (__fastcall **)(__int64))(v5 + 2928))(v4 + 24)) != 0 )
        {
          RESTORESAVEDCATTRS::vDone(&v8);
          *(_DWORD *)(v7[0] + 36LL) |= 0x100u;
          *(_DWORD *)(v7[0] + 2104LL) = 0;
          *(_DWORD *)(v7[0] + 2108LL) = 0;
        }
        else
        {
          RESTORESAVEDCATTRS::vDone(&v8);
          bEndDocInternal(a1, 1u, 2);
        }
        if ( v8 )
          XDCOBJ::vSaveAttributesAlways(v8);
        goto LABEL_17;
      }
    }
  }
LABEL_18:
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return v2;
}
