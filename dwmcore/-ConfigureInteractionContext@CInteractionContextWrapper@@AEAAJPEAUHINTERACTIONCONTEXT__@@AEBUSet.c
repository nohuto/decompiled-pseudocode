__int64 __fastcall CInteractionContextWrapper::ConfigureInteractionContext(
        CInteractionContextWrapper *this,
        struct HINTERACTIONCONTEXT__ *a2,
        const struct SetupInfo *a3)
{
  char *v3; // rax
  __int64 v6; // rdx
  char *v8; // rcx
  char v9; // cl
  char v10; // r13
  char v11; // r15
  char *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // edi
  char v16; // dl
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v26; // rax
  char v28; // [rsp+50h] [rbp-19h]
  char v29; // [rsp+51h] [rbp-18h]
  char v30; // [rsp+52h] [rbp-17h]
  int v31; // [rsp+54h] [rbp-15h] BYREF
  int v32; // [rsp+58h] [rbp-11h] BYREF
  int v33; // [rsp+5Ch] [rbp-Dh] BYREF
  unsigned int v34; // [rsp+60h] [rbp-9h] BYREF
  CInteractionContextWrapper *v35; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v36[6]; // [rsp+70h] [rbp+7h] BYREF

  v3 = (char *)a3 + 4;
  v6 = 3LL;
  if ( *(_DWORD *)a3 == 2 )
  {
    if ( (*v3 & 0x40) != 0 )
      goto LABEL_33;
    v8 = (char *)a3 + 4;
LABEL_4:
    if ( *(_DWORD *)a3 == 4 )
      goto LABEL_5;
    goto LABEL_34;
  }
  v8 = (char *)a3 + 4;
  if ( *(_DWORD *)a3 != 3 )
    goto LABEL_4;
  if ( (*v3 & 0x40) != 0 )
    goto LABEL_33;
LABEL_34:
  if ( *(_DWORD *)a3 != 6 )
    goto LABEL_6;
LABEL_5:
  v3 = v8;
  if ( (*v8 & 0x40) == 0 )
  {
LABEL_6:
    v28 = 0;
    v3 = v8;
    goto LABEL_7;
  }
LABEL_33:
  v28 = 1;
LABEL_7:
  if ( *(_DWORD *)a3 == 2 )
  {
    if ( *v3 < 0 )
      goto LABEL_38;
LABEL_9:
    if ( *(_DWORD *)a3 == 4 )
      goto LABEL_10;
    goto LABEL_39;
  }
  if ( *(_DWORD *)a3 != 3 )
    goto LABEL_9;
  if ( *v3 < 0 )
    goto LABEL_38;
LABEL_39:
  if ( *(_DWORD *)a3 != 6 )
    goto LABEL_11;
LABEL_10:
  if ( *v3 >= 0 )
  {
LABEL_11:
    v30 = 0;
    goto LABEL_12;
  }
LABEL_38:
  v30 = 1;
LABEL_12:
  if ( *(_DWORD *)a3 == 2 )
  {
    if ( (*v3 & 3) != 0 )
      goto LABEL_43;
LABEL_14:
    if ( *(_DWORD *)a3 == 4 )
      goto LABEL_15;
    goto LABEL_44;
  }
  if ( *(_DWORD *)a3 != 3 )
    goto LABEL_14;
  if ( (*v3 & 3) != 0 )
    goto LABEL_43;
LABEL_44:
  if ( *(_DWORD *)a3 != 6 )
    goto LABEL_16;
LABEL_15:
  if ( (*v3 & 3) == 0 )
  {
LABEL_16:
    v9 = 0;
    goto LABEL_17;
  }
LABEL_43:
  v9 = 1;
LABEL_17:
  v29 = v9;
  if ( *(_DWORD *)a3 == 2 )
  {
    if ( (*v3 & 0xC) != 0 )
      goto LABEL_48;
LABEL_19:
    if ( *(_DWORD *)a3 == 4 )
      goto LABEL_20;
    goto LABEL_49;
  }
  if ( *(_DWORD *)a3 != 3 )
    goto LABEL_19;
  if ( (*v3 & 0xC) != 0 )
    goto LABEL_48;
LABEL_49:
  if ( *(_DWORD *)a3 != 6 )
    goto LABEL_21;
LABEL_20:
  if ( (*v3 & 0xC) == 0 )
  {
LABEL_21:
    v10 = 0;
    goto LABEL_22;
  }
LABEL_48:
  v10 = 1;
LABEL_22:
  if ( *(_DWORD *)a3 == 2 )
  {
    if ( (*v3 & 0x30) != 0 )
      goto LABEL_53;
LABEL_24:
    if ( *(_DWORD *)a3 == 4 )
      goto LABEL_25;
    goto LABEL_54;
  }
  if ( *(_DWORD *)a3 != 3 )
    goto LABEL_24;
  if ( (*v3 & 0x30) != 0 )
    goto LABEL_53;
LABEL_54:
  if ( *(_DWORD *)a3 != 6 )
    goto LABEL_26;
LABEL_25:
  if ( (*v3 & 0x30) == 0 )
  {
LABEL_26:
    v11 = 0;
    goto LABEL_27;
  }
LABEL_53:
  v11 = 1;
LABEL_27:
  v12 = (char *)a3 + 16;
  if ( *(_DWORD *)a3 == 3 )
  {
    if ( v9 && (*v12 & 2) != 0 )
      LOBYTE(v6) = 1;
    else
      v6 = 0LL;
    (*(void (__fastcall **)(CInteractionContextWrapper *, __int64))(*(_QWORD *)this + 56LL))(this, v6);
    if ( v10 && (*v12 & 2) != 0 )
      LOBYTE(v13) = 1;
    else
      v13 = 0LL;
    (*(void (__fastcall **)(CInteractionContextWrapper *, __int64))(*(_QWORD *)this + 64LL))(this, v13);
    if ( v11 && (*v12 & 4) != 0 )
      LOBYTE(v14) = 1;
    else
      v14 = 0LL;
    (*(void (__fastcall **)(CInteractionContextWrapper *, __int64))(*(_QWORD *)this + 72LL))(this, v14);
  }
  v15 = ResetInteractionContext(a2);
  if ( v15 >= 0 )
  {
    v15 = SetPropertyInteractionContext(a2, 1LL);
    if ( v15 >= 0 )
    {
      v15 = SetPropertyInteractionContext(a2, 3LL);
      if ( v15 >= 0 )
      {
        v15 = SetPropertyInteractionContext(a2, 2LL);
        if ( v15 >= 0 )
        {
          v16 = *v12;
          v17 = ((~*v12 & 8) << 8) | 1;
          if ( *((float *)a3 + 2) != 0.0 )
            v17 = ((~*v12 & 8) << 8) | 0x101;
          if ( *((float *)a3 + 3) != 0.0 )
            v17 |= 0x200u;
          v18 = v17 | 2;
          if ( !v29 )
            v18 = v17;
          v19 = v18 | 4;
          if ( !v10 )
            v19 = v18;
          v20 = v19 | 0x10;
          if ( !v11 )
            v20 = v19;
          v21 = v20 | 0x10000000;
          if ( *(_DWORD *)a3 != 3 )
            v21 = v20;
          v22 = v21 | 0x40000000;
          if ( (v16 & 1) == 0 )
            v22 = v21;
          if ( *((_DWORD *)a3 + 5) == 1 )
          {
            v22 = v22 & 0x7FFFFCFF | 0x80000100;
          }
          else if ( *((_DWORD *)a3 + 5) == 2 )
          {
            v22 = v22 & 0x7FFFFCFF | 0x80000200;
          }
          v36[0] = 1;
          v36[1] = v22;
          v36[2] = 2;
          v36[3] = v28 != 0 ? 5 : 0;
          v36[4] = 4;
          v36[5] = v30 != 0 ? 5 : 0;
          v15 = SetInteractionConfigurationInteractionContext(a2, 3LL, v36);
          if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
          {
            v31 = v15;
            v32 = v30 != 0 ? 5 : 0;
            v33 = v28 != 0 ? 5 : 0;
            v34 = v22;
            v35 = this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              v23,
              byte_18037F211,
              v24,
              v25,
              (__int64)&v35,
              (__int64)&v34,
              (__int64)&v33,
              (__int64)&v32,
              (__int64)&v31);
          }
          if ( v15 >= 0 )
          {
            v15 = RegisterOutputCallbackInteractionContext(
                    a2,
                    CInteractionContextWrapper::s_InteractionContextCallback,
                    this);
            if ( v15 >= 0 )
            {
              if ( (v26 = (_DWORD *)((char *)this + 24), !v28) && *v26 == 2 || !v30 && *v26 == 4 )
              {
                *v26 = 0;
                *((_DWORD *)this + 7) = 0;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v15;
}
