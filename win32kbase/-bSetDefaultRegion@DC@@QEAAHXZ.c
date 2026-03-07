__int64 __fastcall DC::bSetDefaultRegion(PDEV **this)
{
  unsigned int v2; // r14d
  __int64 v3; // rcx
  LONG left; // r12d
  LONG cx; // edi
  LONG right; // r15d
  LONG top; // r13d
  PDEV *v8; // rbx
  PDEV *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  LONG v14; // r15d
  int v15; // eax
  __int64 v16; // r15
  PDEV *v17; // rax
  PDEV *v18; // rbx
  int v19; // eax
  char v21[8]; // [rsp+68h] [rbp-49h] BYREF
  struct tagSIZE v22; // [rsp+70h] [rbp-41h] BYREF
  PDEV *v23; // [rsp+78h] [rbp-39h] BYREF
  __int64 v24; // [rsp+80h] [rbp-31h] BYREF
  int v25; // [rsp+88h] [rbp-29h]
  int v26; // [rsp+8Ch] [rbp-25h]
  const WCHAR *DriverName; // [rsp+90h] [rbp-21h] BYREF
  char v28; // [rsp+98h] [rbp-19h]
  __int64 cy; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+Fh] BYREF
  struct _RECTL v34; // [rsp+C8h] [rbp+17h] BYREF

  DC::vReleaseRao((DC *)this);
  v2 = 0;
  v22 = 0LL;
  DC::vGet_sizlWindow((DC *)this, &v22);
  left = 0;
  cx = v22.cx;
  right = v22.cx;
  top = 0;
  v8 = this[6];
  *(struct tagSIZE *)&v34.right = v22;
  *(_QWORD *)&v34.left = 0LL;
  if ( this[62] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v21);
    if ( (unsigned int)Feature_3058082109__private_IsEnabledDeviceUsage() && (*((_DWORD *)v8 + 10) & 0x8000) != 0 )
    {
      v9 = this[62];
      if ( *((_DWORD *)v9 + 14) < cx || *((_DWORD *)v9 + 15) < v22.cy )
      {
        if ( (unsigned int)Feature_Servicing_ReportSurfaceSizeMismatch__private_IsEnabledDeviceUsage()
          && (unsigned int)dword_1C02C93D8 > 5
          && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
        {
          cy = v22.cy;
          v30 = cx;
          v31 = *((int *)v9 + 15);
          v32 = *((int *)v9 + 14);
          v33 = *((unsigned __int16 *)this[62] + 50);
          DriverName = PDEV::GetDriverName(this[6]);
          v24 = 0x2000000LL;
          LODWORD(v23) = 25;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v10,
            (int)&unk_1C02954B1,
            v11,
            v12,
            (__int64)&v23,
            (__int64)&v24,
            &DriverName,
            (__int64)&v33,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v30,
            (__int64)&cy);
        }
        v25 = *((_DWORD *)v9 + 14);
        v26 = *((_DWORD *)v9 + 15);
        v24 = 0LL;
        ERECTL::operator*=(&v34.left, (int *)&v24);
        top = v34.top;
        left = v34.left;
      }
      right = v34.right;
    }
    if ( (*((_DWORD *)v8 + 10) & 0x20000) != 0 && *((int *)this[62] + 28) < 0 )
    {
      v13 = *((_DWORD *)v8 + 640);
      left += v13;
      v14 = v13 + right;
      v34.left = left;
      v15 = *((_DWORD *)v8 + 641);
      top += v15;
      v34.bottom += v15;
      v34.top = top;
      v34.right = v14;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v21);
  }
  v16 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
  DC::AcquireDcVisRgnExclusive((DC *)this, (__int64)&DriverName);
  v17 = this[142];
  if ( v17 && v17 != *(PDEV **)(v16 + 6400) )
  {
    v24 = (__int64)this[142];
    RGNOBJ::vSet((RGNOBJ *)&v24, &v34);
LABEL_23:
    REGION::vStamp(this[142]);
    if ( v28 )
      GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(DriverName + 556));
    *((_DWORD *)this + 261) = v22.cy;
    *((_DWORD *)this + 252) = v34.right;
    *((_DWORD *)this + 253) = v34.bottom;
    this[127] = 0LL;
    this[129] = 0LL;
    *((_DWORD *)this + 260) = cx;
    *((_DWORD *)this + 250) = left;
    *((_DWORD *)this + 251) = top;
    v19 = HIDWORD(this[((_DWORD)this[5] & 1) + 127]);
    if ( ((_DWORD)this[5] & 1) != 0 )
      v2 = *((_DWORD *)this + 256);
    *((_DWORD *)this + 298) = v2;
    v2 = 1;
    *((_DWORD *)this + 299) = v19;
    return v2;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v23);
  v18 = v23;
  if ( v23 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v23, &v34);
    this[142] = v18;
    goto LABEL_23;
  }
  this[142] = *(PDEV **)(v16 + 6400);
  if ( v28 )
    GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(DriverName + 556));
  return v2;
}
