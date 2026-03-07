__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  char v4; // r10
  unsigned int v5; // ebx
  __int64 v8; // r8
  int v9; // r8d
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  v4 = a3;
  v5 = a2 & 1;
  switch ( a3 )
  {
    case 0:
      goto LABEL_13;
    case 1:
      v8 = 4 * (unsigned int)!(a2 & 1);
      break;
    case 2:
      v8 = 4 * (unsigned int)!(a2 & 1) + 1;
      break;
    case 3:
      v8 = 4 * (unsigned int)!(a2 & 1) + 2;
      break;
    case 4:
      v8 = 4 * (unsigned int)!(a2 & 1) + 3;
      break;
    case 5:
      v8 = 2 * (unsigned int)!(a2 & 1) + 8;
      break;
    case 6:
      v8 = 2 * (unsigned int)!(a2 & 1) + 9;
      break;
    default:
      if ( (unsigned __int8)a3 < 0x64u || (unsigned __int8)a3 >= 0x96u )
      {
LABEL_13:
        v8 = 255LL;
      }
      else
      {
        v9 = 100;
        if ( (a2 & 1) == 0 )
          v9 = 150;
        v8 = (unsigned int)(unsigned __int8)(v4 - 100) + v9;
      }
      break;
  }
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     a2,
                                                                                                     v8);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v5, &v11, 0LL, 0, a4);
  }
  return result;
}
