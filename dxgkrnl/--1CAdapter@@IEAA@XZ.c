/*
 * XREFs of ??1CAdapter@@IEAA@XZ @ 0x1C0018F30
 * Callers:
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0018EFC (--_GCAdapter@@IEAAPEAXI@Z.c)
 * Callees:
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C01DD210 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkCloseAdapterInternal @ 0x1C01DFFC0 (DxgkCloseAdapterInternal.c)
 *     DxgkDestroyDeviceInternal @ 0x1C01DFFD8 (DxgkDestroyDeviceInternal.c)
 *     DxgkDestroyContextInternal @ 0x1C01DFFF0 (DxgkDestroyContextInternal.c)
 */

void __fastcall CAdapter::~CAdapter(CAdapter *this)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CAdapter::`vftable';
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 != (void *)-1LL )
    ObCloseHandle(v2, 1);
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( *((_DWORD *)this + 14) )
  {
    v4.hSyncObject = *((_DWORD *)this + 14);
    DxgkCddDestroySynchronizationObject(&v4);
  }
  if ( *((_DWORD *)this + 18) )
  {
    v4.hSyncObject = *((_DWORD *)this + 18);
    DxgkDestroyContextInternal(&v4);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v4.hSyncObject = *((_DWORD *)this + 11);
    DxgkDestroyDeviceInternal(&v4);
  }
  if ( *((_DWORD *)this + 10) )
  {
    v4.hSyncObject = *((_DWORD *)this + 10);
    DxgkCloseAdapterInternal(&v4);
  }
  *((_QWORD *)this + 4) = 0LL;
}
