/*
 * XREFs of ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C01CEBCC
 * Callers:
 *     ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x1C01CE7D8 (-ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     ValidateCalibrationData @ 0x1C01CF888 (ValidateCalibrationData.c)
 */

__int64 __fastcall ReadLinearityDataImp(
        void *a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        ULONG *ResultLength,
        void **a5)
{
  unsigned int v5; // ebx
  ULONG v10; // edx
  _DWORD *v11; // rax
  _DWORD *v12; // rdi
  void *v13; // rax
  __int64 v14; // rcx
  void *v15; // rbp

  v5 = 0;
  if ( ZwQueryValueKey(a1, a2, KeyValuePartialInformation, 0LL, 0, ResultLength) != -1073741772 )
  {
    v10 = *ResultLength;
    if ( *ResultLength >= 0x28 && v10 - 12 <= 0xCA0 )
    {
      if ( *a5 )
      {
        Win32FreePool(*a5);
        *a5 = 0LL;
        v10 = *ResultLength;
      }
      v11 = (_DWORD *)Win32AllocPool(v10, 2020635477LL);
      v12 = v11;
      if ( v11 )
      {
        if ( ZwQueryValueKey(a1, a2, KeyValuePartialInformation, v11, *ResultLength, ResultLength) >= 0
          && v12[1] == 3
          && (v12[3] == v12[2] || v12[4] == 2) )
        {
          v13 = (void *)Win32AllocPool((unsigned int)v12[2], 2020635477LL);
          *a5 = v13;
          if ( v13 )
          {
            memmove(v13, v12 + 3, (unsigned int)v12[2]);
            v14 = (unsigned int)v12[2];
            *ResultLength = v14;
            v15 = *a5;
            if ( (unsigned int)ValidateCalibrationData(v14, *a5, a3) )
            {
              v5 = 1;
            }
            else
            {
              Win32FreePool(v15);
              *a5 = 0LL;
            }
          }
        }
        Win32FreePool(v12);
      }
    }
  }
  return v5;
}
