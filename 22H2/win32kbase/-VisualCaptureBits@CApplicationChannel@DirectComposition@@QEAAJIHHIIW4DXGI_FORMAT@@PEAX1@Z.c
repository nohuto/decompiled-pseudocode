/*
 * XREFs of ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C020CE10
 * Callers:
 *     NtVisualCaptureBits @ 0x1C0209F80 (NtVisualCaptureBits.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0022500 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     OpenDwmHandle @ 0x1C0086D6C (OpenDwmHandle.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z @ 0x1C020C214 (-Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::VisualCaptureBits(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        PVOID Object,
        PVOID a9)
{
  int v12; // ebx
  struct DirectComposition::CResourceMarshaler *v13; // rax
  DirectComposition::CResourceMarshaler *v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r9
  DirectComposition::CEvent *v18; // rcx
  DirectComposition::CEvent *v19; // rcx
  int v21; // [rsp+20h] [rbp-38h]
  int v22; // [rsp+20h] [rbp-38h]
  void *v23; // [rsp+30h] [rbp-28h] BYREF
  void *v24; // [rsp+38h] [rbp-20h] BYREF
  DirectComposition::CEvent *v25; // [rsp+60h] [rbp+8h] BYREF

  v25 = 0LL;
  v23 = (void *)-1LL;
  v24 = (void *)-1LL;
  if ( *(int *)(a1 + 24) <= 2 )
  {
    v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
            (DirectComposition::CApplicationChannel *)a1,
            a2);
    v14 = v13;
    if ( v13 && DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v13 + 9), 196) )
    {
      v12 = DirectComposition::CEvent::Create((NSInstrumentation::CLeakTrackingAllocator *)Object, v15, &v25);
      if ( v12 < 0
        || (v12 = OpenDwmHandle(Object, (POBJECT_TYPE)ExEventObjectType, 2u, v16, v21, &v23), v12 < 0)
        || (v12 = OpenDwmHandle(a9, MmSectionObjectType, 3u, v17, v22, &v24), v12 < 0) )
      {
        v19 = v25;
      }
      else
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          (DirectComposition::CApplicationChannel *)a1,
          *(struct DirectComposition::CResourceMarshaler **)(a1 + 2744));
        v18 = *(DirectComposition::CEvent **)(a1 + 2736);
        if ( v18 )
          DirectComposition::CEvent::`scalar deleting destructor'(v18);
        *(_QWORD *)(a1 + 2736) = v25;
        *(_DWORD *)(a1 + 2760) = a5;
        *(_DWORD *)(a1 + 2764) = a6;
        *(_DWORD *)(a1 + 2768) = a7;
        *(_QWORD *)(a1 + 2776) = v23;
        *(_QWORD *)(a1 + 2784) = v24;
        *(_DWORD *)(a1 + 2752) = a3;
        *(_DWORD *)(a1 + 2756) = a4;
        *(_QWORD *)(a1 + 2744) = v14;
        DirectComposition::CResourceMarshaler::AddRef(v14);
        v19 = 0LL;
      }
      if ( v19 )
        DirectComposition::CEvent::`scalar deleting destructor'(v19);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v12;
}
