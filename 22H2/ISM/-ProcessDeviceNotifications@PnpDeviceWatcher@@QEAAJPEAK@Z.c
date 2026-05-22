/*
 * XREFs of ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180026C90
 * Callers:
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x1800386C0 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x180001008 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800266B0 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 *     ?FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180026F64 (-FindDeviceListEntryByInstanceId@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@.c)
 *     ?FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEntry@1@@Z @ 0x180027E5C (-FindDeviceListEntryByInterfacePath@PnpDeviceWatcher@@AEAAJPEAUHSTRING__@@_NAEAPEAUDeviceListEnt.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037280 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x18009EDBC (--_GRetryDeviceListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x18009EF94 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18009F504 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ @ 0x18009F5E0 (-GetCurrentMilliSecTime@QpcTimeConverter@@QEBAIXZ.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x18009F758 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x18009FA38 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     _anonymous_namespace_::WindowsSafeIsEqualString @ 0x18009FAD0 (_anonymous_namespace_--WindowsSafeIsEqualString.c)
 *     ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800A05A0 (-AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z @ 0x1800A0844 (-GetInterfacePath@PnpDevice@@QEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?OpenInterface@PnpDevice@@QEAAJXZ @ 0x1800A095C (-OpenInterface@PnpDevice@@QEAAJXZ.c)
 *     ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800A0ABC (-RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall PnpDeviceWatcher::ProcessDeviceNotifications(PnpDeviceWatcher *this, unsigned int *a2)
{
  char *v3; // rsi
  char *v4; // rbx
  __int64 v5; // rax
  HSTRING *v6; // rdi
  int v7; // ecx
  HSTRING v8; // rbx
  PnpDeviceWatcher::RetryDeviceListEntry *v9; // r12
  PnpDeviceWatcher::RetryDeviceListEntry *i; // rdi
  RefCountedObject *v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // di
  bool v16; // r14
  bool v17; // r15
  int v18; // ecx
  int v19; // ecx
  int DeviceListEntryByInstanceId; // r14d
  PnpDeviceWatcher *v21; // rbx
  unsigned int *v22; // r15
  int started; // eax
  unsigned int v25; // edx
  PnpDeviceWatcher::RetryDeviceListEntry *v26; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v27; // rax
  PnpDeviceWatcher::RetryDeviceListEntry *v28; // r14
  PnpDeviceWatcher::RetryDeviceListEntry *v29; // rax
  RefCountedObject *v30; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v31; // rax
  PnpDeviceWatcher::RetryDeviceListEntry *v32; // r14
  unsigned int CurrentMilliSecTime; // eax
  unsigned int v34; // ecx
  PnpDevice *v35; // rdi
  int InterfacePath; // eax
  unsigned int v37; // edi
  int v38; // eax
  unsigned int v39; // edx
  __int64 v40; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry *v41; // rcx
  PnpDeviceWatcher::RetryDeviceListEntry **v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int16 v46; // ax
  unsigned int v47; // ecx
  const char **v48; // [rsp+20h] [rbp-99h]
  PnpDeviceWatcher::RetryDeviceListEntry *v49; // [rsp+40h] [rbp-79h] BYREF
  __int16 v50; // [rsp+48h] [rbp-71h] BYREF
  HSTRING string; // [rsp+50h] [rbp-69h] BYREF
  RefCountedObject *v52; // [rsp+58h] [rbp-61h] BYREF
  void *v53; // [rsp+60h] [rbp-59h]
  unsigned int *v54; // [rsp+70h] [rbp-49h]
  PCWSTR v55; // [rsp+78h] [rbp-41h]
  const char *v56; // [rsp+80h] [rbp-39h] BYREF
  PCWSTR StringRawBuffer; // [rsp+88h] [rbp-31h] BYREF
  const unsigned __int16 *v58[4]; // [rsp+90h] [rbp-29h] BYREF
  __int128 v59; // [rsp+B0h] [rbp-9h]
  __int128 v60; // [rsp+C0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v54 = a2;
  *a2 = -1;
  v58[1] = 0LL;
  v53 = 0LL;
  v3 = (char *)this + 32;
  while ( 1 )
  {
    v4 = *(char **)v3;
    v5 = **(_QWORD **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || *(char **)(v5 + 8) != v4 )
LABEL_97:
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == v3 )
      v4 = 0LL;
    else
      --*((_QWORD *)v3 + 2);
    v6 = (HSTRING *)v53;
    v53 = v4;
    if ( v6 )
    {
      WindowsDeleteString(v6[4]);
      v6[4] = 0LL;
      operator delete(v6, (const struct std::nothrow_t *)0x28);
    }
    if ( !v4 )
      break;
    v7 = *((_DWORD *)v4 + 6);
    if ( v7 == 1 )
    {
      v8 = (HSTRING)*((_QWORD *)v4 + 4);
      v9 = (PnpDeviceWatcher *)((char *)this + 56);
      for ( i = (PnpDeviceWatcher::RetryDeviceListEntry *)*((_QWORD *)this + 7);
            i != v9;
            i = *(PnpDeviceWatcher::RetryDeviceListEntry **)i )
      {
        if ( (unsigned __int8)anonymous_namespace_::WindowsSafeIsEqualString(*(_QWORD *)(*((_QWORD *)i + 2) + 24LL), v8) )
        {
          v49 = i;
          v28 = i;
          goto LABEL_76;
        }
      }
      v49 = 0LL;
      v52 = 0LL;
      if ( (int)PnpDevice::MakeAndInitialize(v8, &v52) < 0 )
      {
        if ( v52 )
          RefCountedObject::Release(v52);
      }
      else
      {
        v11 = v52;
        v12 = *((_OWORD *)v52 + 3);
        v59 = v12;
        v13 = v12 - 0x11D074D3745A17A0LL;
        if ( (_QWORD)v12 == 0x11D074D3745A17A0LL )
          v13 = *((_QWORD *)&v59 + 1) + 0x25A8F0365FFF014ALL;
        if ( !v13 )
          goto LABEL_34;
        v60 = v12;
        v14 = v12 - 0x4647CD8BE0CBF06CLL;
        if ( (_QWORD)v12 == 0x4647CD8BE0CBF06CLL )
          v14 = *((_QWORD *)&v60 + 1) - 0x74F9F0433B268ABBLL;
        if ( v14 )
          v15 = 0;
        else
LABEL_34:
          v15 = 1;
        v16 = *((_WORD *)v52 + 56) == 89 && *((_WORD *)v52 + 57) == 1;
        v17 = 0;
        if ( !InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL) )
          __fastfail(7u);
        if ( ((1LL << gdwDeviceFamily) & 0x1820) != 0 && *((_WORD *)v11 + 56) == 12 )
          v17 = *((_WORD *)v11 + 57) == 1;
        if ( v15 && (v16 || v17) )
        {
          v29 = (PnpDeviceWatcher::RetryDeviceListEntry *)operator new(
                                                            0x20uLL,
                                                            (const struct std::nothrow_t *)&std::nothrow);
          i = v29;
          if ( v29 )
          {
            *(_QWORD *)v29 = 0LL;
            *((_QWORD *)v29 + 1) = 0LL;
            *((_QWORD *)v29 + 3) = 0LL;
            *((_QWORD *)v29 + 2) = 0LL;
          }
          else
          {
            i = 0LL;
          }
          v28 = i;
          v58[2] = (const unsigned __int16 *)i;
          if ( i )
          {
            v30 = (RefCountedObject *)*((_QWORD *)i + 2);
            *((_QWORD *)i + 2) = v11;
            *((_BYTE *)i + 24) = 0;
            v31 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)this + 8);
            if ( *v31 != v9 )
              goto LABEL_97;
            *(_QWORD *)i = v9;
            *((_QWORD *)i + 1) = v31;
            *v31 = i;
            *((_QWORD *)this + 8) = i;
            ++*((_QWORD *)this + 9);
            v58[3] = 0LL;
            v49 = i;
            if ( v30 )
              RefCountedObject::Release(v30);
LABEL_76:
            if ( v28 )
            {
              started = PnpDeviceWatcher::StartDeviceObject(this, i);
              goto LABEL_78;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x181,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
              (const char *)0x8007000ELL,
              (int)v48);
            RefCountedObject::Release(v11);
          }
        }
        else
        {
          v52 = 0LL;
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
          {
            *((_DWORD *)v11 + 2) = 1;
            (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v11 + 32LL))(v11);
            *((_DWORD *)v11 + 2) = 0;
            (*(void (__fastcall **)(RefCountedObject *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
          }
        }
      }
    }
    else
    {
      if ( !v7 )
      {
        started = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(this, *((HSTRING *)v4 + 4), 1, &v49);
        i = v49;
        goto LABEL_78;
      }
      v18 = v7 - 2;
      if ( !v18 )
      {
        DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInstanceId(
                                        this,
                                        *((HSTRING *)v4 + 4),
                                        0,
                                        &v49);
        if ( DeviceListEntryByInstanceId >= 0 )
        {
          i = v49;
          if ( v49 )
          {
            PnpDeviceWatcher::StopDeviceObject(this, v49);
            v26 = *(PnpDeviceWatcher::RetryDeviceListEntry **)i;
            v27 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)i + 1);
            if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)i + 8LL) != i || *v27 != i )
              goto LABEL_97;
            *v27 = v26;
            *((_QWORD *)v26 + 1) = v27;
            --*((_QWORD *)this + 9);
            PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(i, v25);
          }
          goto LABEL_32;
        }
        goto LABEL_56;
      }
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                                          this,
                                          *((HSTRING *)v4 + 4),
                                          0,
                                          &v49);
          if ( DeviceListEntryByInstanceId < 0 )
            goto LABEL_56;
          i = v49;
          if ( v49 )
          {
            started = PnpDevice::RemoveInterface(*((PnpDevice **)v49 + 2), *((HSTRING *)v4 + 4));
LABEL_78:
            DeviceListEntryByInstanceId = started;
          }
LABEL_32:
          if ( DeviceListEntryByInstanceId < 0 )
            goto LABEL_57;
        }
        else
        {
          v49 = 0LL;
        }
      }
      else
      {
        DeviceListEntryByInstanceId = PnpDeviceWatcher::FindDeviceListEntryByInterfacePath(
                                        this,
                                        *((HSTRING *)v4 + 4),
                                        1,
                                        &v49);
        if ( DeviceListEntryByInstanceId >= 0 )
        {
          i = v49;
          if ( v49 )
          {
            started = PnpDevice::AddInterface(*((PnpDevice **)v49 + 2), *((HSTRING *)v4 + 4));
            goto LABEL_78;
          }
          goto LABEL_32;
        }
LABEL_56:
        i = v49;
LABEL_57:
        if ( i )
          PnpDeviceWatcher::StopDeviceObject(this, i);
      }
    }
  }
  v21 = (PnpDeviceWatcher *)*((_QWORD *)this + 10);
  v22 = v54;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v21 == (PnpDeviceWatcher *)((char *)this + 80) )
        return 0LL;
      v32 = v21;
      v21 = *(PnpDeviceWatcher **)v21;
      CurrentMilliSecTime = QpcTimeConverter::GetCurrentMilliSecTime((PnpDeviceWatcher *)((char *)this + 104));
      v34 = *((_DWORD *)v32 + 6);
      if ( CurrentMilliSecTime >= v34 )
        break;
      v47 = v34 - CurrentMilliSecTime;
      if ( *v22 > v47 )
        *v22 = v47;
    }
    *((_DWORD *)v32 + 6) = CurrentMilliSecTime + 100;
    v35 = (PnpDevice *)*((_QWORD *)v32 + 2);
    WindowsDeleteString(0LL);
    string = 0LL;
    InterfacePath = PnpDevice::GetInterfacePath(v35, &string);
    v37 = InterfacePath;
    if ( InterfacePath < 0 )
      break;
    v38 = PnpDevice::OpenInterface(*((PnpDevice **)v32 + 2));
    if ( v38 < 0 )
    {
      if ( v38 == -2147024864 )
      {
        if ( (unsigned int)dword_1802063F0 > 5 )
        {
          v50 = *((_WORD *)v32 + 14);
          StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
          v58[0] = (const unsigned __int16 *)"Failed to exclusively open LampArray";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>>(
            v43,
            (int)&unk_1801CAE23,
            v44,
            v45,
            v58,
            &StringRawBuffer,
            (__int64)&v50);
        }
        v46 = *((_WORD *)v32 + 14);
        if ( v46 > 0 )
        {
          *((_WORD *)v32 + 14) = v46 - 1;
          if ( *v22 > 0x64 )
            *v22 = 100;
          goto LABEL_87;
        }
      }
    }
    else
    {
      LampArrayRawInputProvider::OnLampArrayAdded(*(LampArrayRawInputProvider **)this, *((struct PnpDevice **)v32 + 2));
      if ( (unsigned int)dword_1802063F0 > 5 )
      {
        v55 = WindowsGetStringRawBuffer(string, 0LL);
        v56 = "Successfully exclusively opened LampArray";
        v48 = &v56;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v40,
          &unk_1801CAE88);
      }
    }
    v41 = *(PnpDeviceWatcher::RetryDeviceListEntry **)v32;
    v42 = (PnpDeviceWatcher::RetryDeviceListEntry **)*((_QWORD *)v32 + 1);
    if ( *(PnpDeviceWatcher::RetryDeviceListEntry **)(*(_QWORD *)v32 + 8LL) != v32 || *v42 != v32 )
      goto LABEL_97;
    *v42 = v41;
    *((_QWORD *)v41 + 1) = v42;
    --*((_QWORD *)this + 12);
    PnpDeviceWatcher::RetryDeviceListEntry::`scalar deleting destructor'(v32, v39);
LABEL_87:
    WindowsDeleteString(string);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD7,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevicewatcher.cpp",
    (const char *)(unsigned int)InterfacePath,
    (int)v48);
  WindowsDeleteString(string);
  return v37;
}
