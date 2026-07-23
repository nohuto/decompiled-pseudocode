/*
 * XREFs of SepSetLogonSessionToken @ 0x140612290
 * Callers:
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     SepStopReferencingLogonSession @ 0x140612358 (SepStopReferencingLogonSession.c)
 *     SepDuplicateToken @ 0x14071B1E0 (SepDuplicateToken.c)
 */

void __fastcall SepSetLogonSessionToken(__int64 a1)
{
  __int64 v1; // rax
  int v3; // eax
  int v4; // eax
  struct _DMA_ADAPTER *v5; // rcx
  _DWORD v6[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-28h]
  __int64 v8; // [rsp+50h] [rbp-20h]
  int v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+5Ch] [rbp-14h]
  __int128 v11; // [rsp+60h] [rbp-10h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 216);
  v6[1] = 0;
  v10 = 0;
  if ( !*(_QWORD *)(v1 + 48) )
  {
    v3 = *(_DWORD *)(a1 + 200);
    if ( (v3 & 0x10) == 0 && (v3 & 8) == 0 )
    {
      DmaAdapter = 0LL;
      v7 = 0LL;
      v9 = 0;
      v8 = 0LL;
      v6[0] = 48;
      v11 = 0LL;
      if ( (int)SepDuplicateToken(a1, (unsigned int)v6, 0, 1, 0, 0, 0, (__int64)&DmaAdapter) >= 0 )
      {
        v4 = SepStopReferencingLogonSession(DmaAdapter);
        v5 = DmaAdapter;
        if ( v4 < 0 )
        {
LABEL_9:
          HalPutDmaAdapter(v5);
          return;
        }
        if ( _InterlockedCompareExchange64(
               (volatile signed __int64 *)(*(_QWORD *)(a1 + 216) + 48LL),
               (signed __int64)DmaAdapter,
               0LL) )
        {
          v5 = DmaAdapter;
          goto LABEL_9;
        }
      }
    }
  }
}
