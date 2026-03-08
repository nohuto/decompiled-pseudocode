/*
 * XREFs of ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C01A5F74
 * Callers:
 *     ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x1C01A5B7C (-ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ValidateCalibrationData @ 0x1C01A6BA0 (ValidateCalibrationData.c)
 */

__int64 __fastcall ReadLinearityDataImp(
        void *a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        ULONG *ResultLength,
        void **a5)
{
  unsigned int v5; // ebx
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  void *v12; // rax
  __int64 v13; // rcx
  void *v14; // rbp

  v5 = 0;
  if ( ZwQueryValueKey(a1, a2, KeyValuePartialInformation, 0LL, 0, ResultLength) != -1073741772
    && *ResultLength >= 0x28
    && *ResultLength - 12 <= 0xCA0 )
  {
    if ( *a5 )
    {
      Win32FreePool(*a5);
      *a5 = 0LL;
    }
    v10 = (_DWORD *)Win32AllocPoolZInit(*ResultLength, 2020635477LL);
    v11 = v10;
    if ( v10 )
    {
      if ( ZwQueryValueKey(a1, a2, KeyValuePartialInformation, v10, *ResultLength, ResultLength) >= 0
        && v11[1] == 3
        && (v11[3] == v11[2] || v11[4] == 2) )
      {
        v12 = (void *)Win32AllocPoolZInit((unsigned int)v11[2], 2020635477LL);
        *a5 = v12;
        if ( v12 )
        {
          memmove(v12, v11 + 3, (unsigned int)v11[2]);
          v13 = (unsigned int)v11[2];
          *ResultLength = v13;
          v14 = *a5;
          if ( (unsigned int)ValidateCalibrationData(v13, *a5, a3) )
          {
            v5 = 1;
          }
          else
          {
            Win32FreePool(v14);
            *a5 = 0LL;
          }
        }
      }
      Win32FreePool(v11);
    }
  }
  return v5;
}
