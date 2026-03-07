__int64 __fastcall CLegacySurfaceManager::ProcessUnclaimedTokens(
        CLegacySurfaceManager *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // esi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v10; // r15
  unsigned int v11; // r14d
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int64 v15; // r9
  unsigned int i; // r8d
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // ecx
  bool v20; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v21[16]; // [rsp+38h] [rbp-30h] BYREF

  v3 = *((_DWORD *)this + 32);
  v4 = 0;
  *a2 = 0;
  if ( v3 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start,
        a3,
        1LL,
        v21);
    v7 = 0;
    if ( *((_DWORD *)this + 32) )
    {
      while ( 1 )
      {
        v8 = *((_QWORD *)this + 13);
        v20 = 0;
        ++*(_DWORD *)(v8 + 16LL * v7);
        v9 = *((_QWORD *)this + 13);
        v10 = *(const struct _D3DKMT_PRESENTHISTORYTOKEN **)(v9 + 16LL * v7 + 8);
        v11 = *(_DWORD *)(v9 + 16LL * v7);
        v12 = CLegacySurfaceManager::ProcessToken(this, v10, a3, &v20);
        v4 = v12;
        if ( v12 < 0 )
          break;
        if ( v11 > 0x64 || v20 )
        {
          v14 = *((_DWORD *)this + 32);
          if ( v7 >= v14 )
          {
            v4 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024809, 0x19Cu, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024809, 0x113u, 0LL);
            goto LABEL_10;
          }
          v15 = *((_QWORD *)this + 13);
          for ( i = v7; i < v14 - 1; v14 = *((_DWORD *)this + 32) )
          {
            v17 = 2LL * i;
            v18 = 2LL * ++i;
            *(_OWORD *)(v15 + 8 * v17) = *(_OWORD *)(v15 + 8 * v18);
          }
          v4 = 0;
          *((_DWORD *)this + 32) = v14 - 1;
          operator delete(v10);
          if ( !v20 )
            ++*((_DWORD *)this + 25);
          --v7;
        }
        if ( ++v7 >= *((_DWORD *)this + 32) )
          goto LABEL_10;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x10Bu, 0LL);
    }
LABEL_10:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop,
        a3,
        1LL,
        v21);
  }
  return v4;
}
