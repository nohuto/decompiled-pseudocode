/*
 * XREFs of IsWindowDesktopComposed @ 0x1C009D810
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C022DC78 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowDesktopComposed(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 8)) != 0 )
    return *(_DWORD *)(*(_QWORD *)v2 + 64LL) & 1;
  else
    return 0LL;
}
