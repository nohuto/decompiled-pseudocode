/*
 * XREFs of ?CleanupChannelObject@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C02DC7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ @ 0x1C02DE9BC (-Release@DXGCOMPOSITIONSURFACEPROXY@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::CleanupChannelObject(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 == 18 )
  {
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 20) = 0;
    *(_BYTE *)(a3 + 13) = 1;
    return DXGCOMPOSITIONSURFACEPROXY::Release((DXGCOMPOSITIONSURFACEPROXY *)a3);
  }
  return result;
}
