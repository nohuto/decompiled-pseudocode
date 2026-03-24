/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1C0133B00
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     EnterCrit @ 0x1C002EB00 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0057C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C01671D8 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C0169C1C (RIMIDEResetPointerDeviceMaxCount.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(char *a1, char *a2, unsigned int a3)
{
  __int64 v3; // r13
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  size_t v11; // r14
  void *v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  PVOID v16; // r14
  char *v17; // r15
  _DWORD *v18; // r15
  unsigned int v19; // r12d
  _DWORD *v20; // rsi
  int v21; // r8d
  int v22; // eax
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  Object = 0LL;
  v6 = 1;
  EnterCrit(0, 1);
  if ( (unsigned int)(v3 - 1) > 6 || (v8 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v10 = 87LL;
    goto LABEL_43;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v10 = 5LL;
LABEL_43:
    v6 = 0;
    UserSetLastError(v10, v7);
    goto LABEL_44;
  }
  if ( v8 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v9) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v8] > MmUserProbeAddress || &a2[v8] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v11 = (unsigned int)v8;
  v12 = (void *)Win32AllocPoolWithQuota((unsigned int)v8, 0x74697355u);
  v13 = (__int64)v12;
  if ( !v12 )
    ExRaiseStatus(-1073741801);
  memmove(v12, a2, v11);
  v14 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v16 = Object;
  if ( Object )
    v17 = (char *)Object + 88;
  else
    v17 = 0LL;
  if ( v14 < 0 )
    goto LABEL_32;
  if ( -__CFSHR__(*((_DWORD *)v17 + 50), 8) != 1 )
    goto LABEL_32;
  v18 = (_DWORD *)*((_QWORD *)v17 + 60);
  if ( *(_DWORD *)(*((_QWORD *)Object + 59) + 16LL) || (v18[78] & 0x2000) == 0 )
    goto LABEL_32;
  v19 = 0;
  if ( (_DWORD)v3 )
  {
    v20 = (_DWORD *)(v13 + 4);
    while ( *((_WORD *)v20 - 2) == 13 )
    {
      if ( *((_WORD *)v20 - 1) == 85 )
      {
        v15 = (unsigned int)*v20;
        if ( (int)v15 > 256 || (v21 = v18[6], (unsigned int)(v21 - 1) > 3) )
        {
          if ( v18[6] != 7 )
            break;
          v21 = 7;
          if ( (int)v15 > 5 )
            break;
        }
        v22 = v18[180] - 1;
        if ( v21 != 7 )
          v22 = v18[180];
        if ( (_DWORD)v15 != v22 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v18) )
          break;
      }
      else
      {
        if ( *((_WORD *)v20 - 1) != 89 || v18[6] != 7 || *v20 > 1u )
          break;
        v18[226] = *v20;
      }
      ++v19;
      v20 += 3;
      if ( v19 >= (unsigned int)v3 )
        goto LABEL_38;
    }
LABEL_32:
    v6 = 0;
    UserSetLastError(87LL, v15);
  }
LABEL_38:
  if ( v16 )
    ObfDereferenceObject(v16);
  if ( v13 )
    Win32FreePool(v13);
LABEL_44:
  UserSessionSwitchLeaveCrit();
  return v6;
}
