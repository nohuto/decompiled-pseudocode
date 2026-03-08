/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x1400026E8
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x1400025CC (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140003824 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x14000394C (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x14000C2C0 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPortClient::~CPortClient(CPortClient *this)
{
  bool v1; // zf
  void *v3; // r8
  void *v4; // rcx

  v1 = *((_BYTE *)this + 24) == 0;
  *(_QWORD *)this = &CPortClient::`vftable';
  if ( !v1 )
  {
    v4 = (void *)*((_QWORD *)this + 2);
    if ( v4 )
    {
      CloseHandle(v4);
      *((_BYTE *)this + 24) = 0;
    }
  }
  *((_QWORD *)this + 2) = 0LL;
  v3 = (void *)*((_QWORD *)this + 5);
  *((_DWORD *)this + 2) = 0;
  if ( v3 )
  {
    HeapFree(*((HANDLE *)this + 6), 0, v3);
    *((_QWORD *)this + 5) = 0LL;
  }
}
