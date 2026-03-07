__int64 __fastcall GreStartDocInternal(HDC a1, __int64 a2, int *a3, unsigned int a4, int a5)
{
  int v6; // edi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // edi
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(__int64, _QWORD, _QWORD); // rdi
  DC *v19; // rcx
  _DWORD v20[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h] BYREF
  XDCOBJ *v22; // [rsp+50h] [rbp-20h] BYREF
  DC *v23[3]; // [rsp+58h] [rbp-18h] BYREF

  v6 = (int)a1;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( !v23[0] )
    goto LABEL_36;
  if ( *((_WORD *)v23[0] + 6) == 1 )
  {
    v14 = v6 & 0x7F0000;
    if ( v14 == 0x10000 )
      goto LABEL_36;
    if ( v14 == 6684672 )
      goto LABEL_36;
    v20[1] = *((unsigned __int16 *)v23[0] + 6);
    v15 = *((_QWORD *)v23[0] + 6);
    v21 = v15;
    v20[0] = 26;
    v16 = *(_DWORD *)(v15 + 40);
    if ( (v16 & 1) != 0 || !*(_QWORD *)(v15 + 2536) || *((_DWORD *)v23[0] + 8) || *((_QWORD *)v23[0] + 62) )
      goto LABEL_36;
    if ( (v16 & 0x8000) == 0 )
    {
      v9 = -1;
LABEL_36:
      DCOBJ::~DCOBJ((DCOBJ *)v23);
      return v9;
    }
    if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v21, 0LL) )
      goto LABEL_36;
    v17 = v21;
    *a3 = *(_DWORD *)(*(_QWORD *)(v21 + 2528) + 112LL) & 0x2000000;
    DC::pSurface(v23[0], *(struct SURFACE **)(v17 + 2528));
    if ( (unsigned int)Feature_3058082109__private_IsEnabledDeviceUsage() )
    {
      if ( !*a3 )
      {
LABEL_21:
        DC::bSetDefaultRegion(v23[0]);
LABEL_22:
        v22 = 0LL;
        v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v21 + 2944);
        if ( (*(_DWORD *)(v21 + 40) & 0x8000) != 0 )
        {
          v22 = (XDCOBJ *)v23;
          if ( (*((_DWORD *)v23[0] + 11) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v23);
            *((_DWORD *)v23[0] + 11) &= ~2u;
          }
        }
        if ( !UmpdSecurityGateNoUmpdObj() || v18 )
          LODWORD(v18) = v18(
                           (*(_QWORD *)(v21 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v21 + 2528) != 0LL),
                           *(_QWORD *)(a2 + 8),
                           a4);
        RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v22);
        v19 = v23[0];
        if ( *((_DWORD *)v23[0] + 523) != -1 )
        {
          a5 = *((_DWORD *)v23[0] + 523);
          GreExtEscapeInternal((struct DCOBJ *)v23, 0x11u, 4u, (char *)&a5, 0, 0LL, (const struct RFONTOBJ::Tag *)v20);
          *((_DWORD *)v23[0] + 523) = -1;
          v19 = v23[0];
        }
        if ( (*((_DWORD *)v19 + 9) & 0x400) != 0 )
        {
          LOWORD(a5) = 1;
          GreExtEscapeInternal((struct DCOBJ *)v23, 0x21u, 2u, (char *)&a5, 0, 0LL, (const struct RFONTOBJ::Tag *)v20);
          *((_DWORD *)v23[0] + 9) &= ~0x400u;
          v19 = v23[0];
        }
        if ( (_DWORD)v18 )
        {
          v9 = a4;
          *((_DWORD *)v19 + 27) = *((_DWORD *)v19 + 26);
        }
        if ( v22 )
          XDCOBJ::vSaveAttributesAlways(v22);
        goto LABEL_36;
      }
    }
    else if ( !*a3 )
    {
      goto LABEL_22;
    }
    *((_QWORD *)v23[0] + 64) = *(_QWORD *)(*(_QWORD *)(v21 + 2528) + 56LL);
    goto LABEL_21;
  }
  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
    {
      a5 = 0;
      v20[0] = v12;
      v22 = (XDCOBJ *)0x1000000;
      LODWORD(v21) = 74780;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        byte_1C03200B1,
        v11,
        v12,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)v20,
        (__int64)&a5);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return 0xFFFFFFFFLL;
}
