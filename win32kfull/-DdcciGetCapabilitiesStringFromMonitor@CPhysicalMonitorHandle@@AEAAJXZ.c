__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(CPhysicalMonitorHandle *this)
{
  unsigned int v1; // esi
  char *v2; // r12
  unsigned __int64 v3; // r15
  unsigned int v4; // edi
  int v6; // ebx
  unsigned __int8 v7; // si
  unsigned int v8; // r13d
  char *Pool2; // rax
  size_t v10; // r8
  unsigned int v11; // esi
  unsigned int v12; // edi
  char *v13; // rax
  void *v14; // rcx
  int v16; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v17[4]; // [rsp+28h] [rbp-48h] BYREF
  __int16 v18; // [rsp+2Ch] [rbp-44h]
  unsigned int v19; // [rsp+30h] [rbp-40h]
  char *v20; // [rsp+38h] [rbp-38h]
  _OWORD Src[2]; // [rsp+40h] [rbp-30h] BYREF
  int v22; // [rsp+60h] [rbp-10h]
  __int16 v23; // [rsp+64h] [rbp-Ch]

  LOWORD(v1) = 0;
  v2 = 0LL;
  LODWORD(v3) = 0;
  v19 = 0;
  v4 = 0;
  while ( 1 )
  {
    *(_DWORD *)v17 = 15958865;
    v18 = (unsigned __int8)v1;
    v17[3] = BYTE1(v1);
    v6 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, -500000LL, v17, 6u);
    if ( v6 < 0 )
      break;
    v22 = 0;
    v23 = 0;
    memset(Src, 0, sizeof(Src));
    v6 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(this, -500000LL, Src, 0x26u);
    if ( v6 < 0 )
      break;
    if ( (BYTE1(Src[0]) & 0x7Fu) < 3 || (v7 = (BYTE1(Src[0]) & 0x7F) - 3, v7 > 0x20u) )
    {
      v6 = -1071774331;
      break;
    }
    if ( (BYTE1(Src[0]) & 0x7F) == 3 )
      goto LABEL_17;
    v16 = v7;
    v8 = v7 + v4;
    if ( v8 < v4 )
    {
LABEL_20:
      v6 = -1073741675;
      break;
    }
    v6 = 0;
    if ( (unsigned int)v3 <= v8 )
    {
      if ( (_DWORD)v3 )
      {
        v3 = 2LL * (unsigned int)v3;
        if ( v3 > 0xFFFFFFFF )
          goto LABEL_20;
      }
      else
      {
        LODWORD(v3) = 2048;
      }
      Pool2 = (char *)ExAllocatePool2(258LL, (unsigned int)v3, 1664248135LL);
      v20 = Pool2;
      if ( !Pool2 )
      {
        v6 = -1073741801;
        break;
      }
      if ( v2 )
      {
        memmove(Pool2, v2, v4);
        ExFreePoolWithTag(v2, 0x63326947u);
        Pool2 = v20;
      }
      v2 = Pool2;
    }
    v10 = v7;
    v11 = v19;
    memmove(&v2[v19], (char *)Src + 5, v10);
    v1 = v16 + v11;
    v4 = v8;
    v19 = v1;
    if ( v1 > 0xFFE0 )
    {
LABEL_17:
      if ( v4 )
      {
        if ( (unsigned int)v3 > v4 )
        {
          v2[v4] = 0;
          v12 = v4 + 1;
          OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v16, (CPhysicalMonitorHandle *)((char *)this + 72));
          if ( !CPhysicalMonitorHandle::IsDDCCICapabilitiesStringInitialized(this) )
          {
            v13 = (char *)ExAllocatePool2(258LL, v12, 1664248135LL);
            *((_QWORD *)this + 10) = v13;
            if ( v13 )
            {
              v6 = RtlStringCbCopyA(v13, v12, v2);
              if ( v6 >= 0 )
              {
                *((_DWORD *)this + 22) = v12;
              }
              else
              {
                v14 = (void *)*((_QWORD *)this + 10);
                if ( v14 )
                  ExFreePoolWithTag(v14, 0x63326947u);
                *((_QWORD *)this + 10) = 0LL;
                *((_DWORD *)this + 22) = 0;
              }
            }
            else
            {
              v6 = -1073741801;
            }
          }
          OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v16);
        }
        else
        {
          v6 = -1071774328;
        }
      }
      else
      {
        v6 = -1071774329;
      }
      break;
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x63326947u);
  return (unsigned int)v6;
}
