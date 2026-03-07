void __fastcall TR_Disable_Internal(__int64 a1, char a2)
{
  __int64 v4; // rsi
  struct _MDL *v5; // rcx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  (*(void (**)(void))(*(_QWORD *)(a1 + 32) + 40LL))();
  _InterlockedExchange((volatile __int32 *)(a1 + 108), 0);
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 280) )
      TR_FreeSecureTransferSegments(a1);
    if ( *(_QWORD *)(a1 + 208) != a1 + 208 )
      XilCoreCommonBuffer_ReleaseBuffers(v4 + 88);
    if ( *(_QWORD *)(a1 + 224) != a1 + 224 )
      XilCoreCommonBuffer_ReleaseBuffers(v4 + 88);
    v5 = *(struct _MDL **)(a1 + 120);
    if ( v5 )
    {
      IoFreeMdl(v5);
      *(_QWORD *)(a1 + 120) = 0LL;
    }
  }
}
