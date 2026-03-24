/*
 * XREFs of ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C005B078
 * Callers:
 *     DCompositionProcessCallout @ 0x1C005B030 (DCompositionProcessCallout.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0029550 (Win32AllocPoolWithQuotaZInit.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C005B100 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C005B188 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C005B4E4 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CProcessData::OnProcessCreation(struct _W32PROCESS *a1)
{
  struct DirectComposition::CProcessData *v2; // rax
  struct DirectComposition::CProcessData *v3; // rbx
  unsigned int v4; // edx
  int v5; // edi

  v2 = (struct DirectComposition::CProcessData *)Win32AllocPoolWithQuotaZInit(0x30uLL, 0x64704344u);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *((_OWORD *)v2 + 1) = 0LL;
    *((_OWORD *)v2 + 2) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    v5 = DirectComposition::CConnection::OnProcessCreation(v3);
    if ( v5 >= 0 )
      v5 = DirectComposition::CChannel::OnProcessCreation(v3);
    if ( v5 < 0 )
    {
      DirectComposition::CProcessData::`scalar deleting destructor'(v3, v4);
      v3 = 0LL;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  *((_QWORD *)a1 + 32) = v3;
  return (unsigned int)v5;
}
