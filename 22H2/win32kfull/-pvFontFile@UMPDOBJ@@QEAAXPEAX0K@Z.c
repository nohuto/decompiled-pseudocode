/*
 * XREFs of ?pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z @ 0x1C02B18E4
 * Callers:
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02B45A0 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 * Callees:
 *     Feature_2593139002__private_IsEnabledDeviceUsage @ 0x1C016B444 (Feature_2593139002__private_IsEnabledDeviceUsage.c)
 *     ReferenceW32Process @ 0x1C01CC158 (ReferenceW32Process.c)
 */

void __fastcall UMPDOBJ::pvFontFile(UMPDOBJ *this, void *a2, void *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 CurrentProcessWin32Process; // rax

  if ( (unsigned int)Feature_2593139002__private_IsEnabledDeviceUsage() )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    *((_QWORD *)this + 47) = CurrentProcessWin32Process;
    ReferenceW32Process(CurrentProcessWin32Process);
  }
  else
  {
    *((_QWORD *)this + 47) = PsGetCurrentProcess(v9, v8, v10);
  }
  *((_QWORD *)this + 45) = a2;
  *((_QWORD *)this + 44) = a3;
  *((_DWORD *)this + 93) = a4;
}
