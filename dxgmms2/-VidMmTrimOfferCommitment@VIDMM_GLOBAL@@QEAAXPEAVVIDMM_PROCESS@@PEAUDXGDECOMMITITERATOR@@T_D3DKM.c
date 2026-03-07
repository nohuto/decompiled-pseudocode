void __fastcall VIDMM_GLOBAL::VidMmTrimOfferCommitment(
        VIDMM_GLOBAL *this,
        struct _KPROCESS **a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v10; // rdx
  struct _KPROCESS *v11; // rcx
  unsigned __int64 v12; // [rsp+20h] [rbp-99h] BYREF
  __int64 v13; // [rsp+28h] [rbp-91h] BYREF
  _QWORD v14[12]; // [rsp+30h] [rbp-89h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-29h] BYREF

  if ( (*((_DWORD *)this + 1764) & 0x10) == 0 )
  {
    v12 = 0LL;
    memset(v14, 0, 0x58uLL);
    LODWORD(v14[0]) = 124;
    v14[5] = a2;
    v14[6] = a3;
    LODWORD(v14[7]) = a4;
    if ( (*(_BYTE *)&a4.0 & 1) != 0 )
    {
      v13 = 0LL;
      v10 = 0LL;
      do
      {
        v14[8] = a5 - v10;
        v14[9] = &v13;
        VIDMM_GLOBAL::QueueLazySystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v14);
        v10 = v13 + v12;
        v12 += v13;
      }
      while ( v13 && v10 < a5 );
    }
    else
    {
      v14[8] = a5;
      v14[9] = &v12;
      VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v14, 1);
      v10 = v12;
    }
    *a6 = v10;
    if ( v10 )
    {
      v11 = *a2;
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(v11, &ApcState);
      (*(void (__fastcall **)(struct _KPROCESS *))(*(_QWORD *)a2[3] + 136LL))(a2[3]);
      KeUnstackDetachProcess(&ApcState);
    }
  }
}
