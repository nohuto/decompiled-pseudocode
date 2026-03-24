/*
 * XREFs of DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1C014AA00
 * Callers:
 *     DxgkConvertDisplayConfigToDevMode @ 0x1C014A8A0 (DxgkConvertDisplayConfigToDevMode.c)
 * Callees:
 *     DxgkGetAdapterDefaultScaling @ 0x1C014EAF0 (DxgkGetAdapterDefaultScaling.c)
 *     IsMiniportDriverCCDSupport @ 0x1C0151ED4 (IsMiniportDriverCCDSupport.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigCScalingToDdiScaling(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // edi
  __int64 v8; // rax

  v3 = (int)a1;
  v4 = 0;
  switch ( (_DWORD)a1 )
  {
    case 1:
      goto LABEL_8;
    case 2:
      *a3 = 2;
      return v4;
    case 3:
      *a3 = 3;
      return v4;
    case 4:
      if ( (unsigned int)IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = 4;
        return v4;
      }
LABEL_8:
      DxgkGetAdapterDefaultScaling(a2, a3);
      return v4;
    case 5:
      if ( (unsigned int)IsMiniportDriverCCDSupport(a2) )
      {
        *a3 = 5;
        return v4;
      }
      goto LABEL_8;
    case 0x80:
      *a3 = 253;
      break;
    default:
      v8 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v8 + 24) = v3;
      WdLogEvent5_WdError(v8);
      return (unsigned int)-1073741811;
  }
  return v4;
}
