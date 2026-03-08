/*
 * XREFs of DxgkGetProcessInterferenceCount @ 0x1C0311140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0014DD8 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkGetProcessInterferenceCount(__int64 a1, _DWORD *a2)
{
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v13);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  ProcessDxgProcess = PsGetProcessDxgProcess(a1);
  *a2 = 0;
  v5 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(ProcessDxgProcess + 104), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    if ( *(_DWORD *)(v5 + 40) == 1 )
    {
      v6 = 0;
      v7 = 34LL;
      do
      {
        DXGGLOBAL::GetGlobal();
        if ( DXGGLOBAL::m_pDxgmmsExport[v7 - 34] )
        {
          v14 = 0;
          Global = DXGGLOBAL::GetGlobal();
          v9 = *(_QWORD *)(v5 + 64);
          v10 = *(_QWORD *)((char *)Global + v7 * 8);
          if ( v9 )
          {
            v11 = *(_QWORD *)(v9 + 8LL * (unsigned int)(*(_DWORD *)v10 - 1) + 16);
            if ( v11 )
              (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v10 + 8) + 896LL))(v11, &v14);
          }
          *a2 += v14;
        }
        ++v6;
        ++v7;
      }
      while ( v6 < 2 );
    }
    if ( v12[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
}
