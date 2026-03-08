/*
 * XREFs of ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C0249170
 * Callers:
 *     NtDesktopCaptureBits @ 0x1C0248A00 (NtDesktopCaptureBits.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C005B708 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     OpenDwmHandle @ 0x1C00917AC (OpenDwmHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C024BC04 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::DesktopCaptureBits(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        PVOID Object,
        PVOID a9)
{
  int v13; // esi
  __int64 v14; // r9
  __int64 v15; // r9
  struct _ERESOURCE *v16; // rdi
  int v17; // eax
  __int64 v18; // rdi
  struct _ERESOURCE *v19; // rbx
  struct _ERESOURCE *v20; // rbx
  struct _ERESOURCE *v21; // rbx
  struct _ERESOURCE *v22; // rbx
  int ReturnLength; // [rsp+28h] [rbp-51h]
  int ReturnLengtha; // [rsp+28h] [rbp-51h]
  char v26[4]; // [rsp+58h] [rbp-21h] BYREF
  int TokenInformation; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG v28; // [rsp+60h] [rbp-19h] BYREF
  void *TokenHandle; // [rsp+68h] [rbp-11h] BYREF
  void *v30; // [rsp+70h] [rbp-9h] BYREF
  void *v31; // [rsp+78h] [rbp-1h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF

  TokenHandle = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v26[0] = 0;
  v13 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  if ( v13 >= 0 )
  {
    TokenInformation = 0;
    v28 = 0;
    ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &v28);
    if ( TokenInformation )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"ID_CAP_SCREENCAPTURE");
      v13 = RtlCapabilityCheck(TokenHandle, &DestinationString, v26);
    }
    else
    {
      v26[0] = 1;
    }
    ZwClose(TokenHandle);
    if ( v13 >= 0 )
    {
      if ( v26[0] )
      {
        v13 = OpenDwmHandle(Object, (POBJECT_TYPE)ExEventObjectType, 2u, v14, ReturnLength, &v31);
        if ( v13 >= 0 )
        {
          v13 = OpenDwmHandle(a9, MmSectionObjectType, 3u, v15, ReturnLengtha, &v30);
          if ( v13 >= 0 )
          {
            v16 = *(struct _ERESOURCE **)(*(_QWORD *)(a1 + 152) + 32LL);
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(v16, 1u);
            v17 = DirectComposition::CSystemChannel::DesktopCaptureBits(
                    *(_QWORD *)(a1 + 152),
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    v31,
                    v30);
            v18 = *(_QWORD *)(a1 + 152);
            v13 = v17;
            ExReleaseResourceLite(*(PERESOURCE *)(v18 + 32));
            KeLeaveCriticalRegion();
            do
            {
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 24), 2, 1) == 1 )
              {
                v19 = *(struct _ERESOURCE **)(v18 + 32);
                KeEnterCriticalRegion();
                ExAcquireResourceExclusiveLite(v19, 1u);
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 48LL))(v18, 0LL);
                v20 = *(struct _ERESOURCE **)(*(_QWORD *)(v18 + 40) + 8LL);
                KeEnterCriticalRegion();
                ExAcquireResourceSharedLite(v20, 1u);
                if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v18 + 40)) )
                  *(_DWORD *)(v18 + 24) = 4;
                ExReleaseResourceLite(*(PERESOURCE *)(v18 + 32));
                KeLeaveCriticalRegion();
                ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v18 + 40) + 8LL));
                KeLeaveCriticalRegion();
              }
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 24), 5, 4) == 4 )
              {
                v21 = *(struct _ERESOURCE **)(v18 + 32);
                KeEnterCriticalRegion();
                ExAcquireResourceExclusiveLite(v21, 1u);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 56LL))(v18);
                v22 = *(struct _ERESOURCE **)(*(_QWORD *)(v18 + 40) + 8LL);
                KeEnterCriticalRegion();
                ExAcquireResourceSharedLite(v22, 1u);
                if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v18 + 40)) )
                  *(_DWORD *)(v18 + 24) = 1;
                ExReleaseResourceLite(*(PERESOURCE *)(v18 + 32));
                KeLeaveCriticalRegion();
                ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v18 + 40) + 8LL));
                KeLeaveCriticalRegion();
              }
            }
            while ( *(_DWORD *)(v18 + 24) == 1 );
          }
        }
      }
      else
      {
        return (unsigned int)-1073741790;
      }
    }
  }
  return (unsigned int)v13;
}
