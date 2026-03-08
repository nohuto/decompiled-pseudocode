/*
 * XREFs of ?RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z @ 0x1C01A60F0
 * Callers:
 *     ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x1C01A59F4 (-ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall RegQueryValueCal(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v7; // rsi
  NTSTATUS v10; // ebx
  unsigned int v11; // ebp
  _DWORD *v12; // rdi
  unsigned int v13; // eax
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  ResultLength = 0;
  v7 = a6;
  if ( a4 || !a6 )
  {
    v11 = a5;
    if ( a5 - 12 > 0xCA0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      ResultLength = a5 + 12;
      v12 = (_DWORD *)Win32AllocPoolZInit(a5 + 12, 2020635477LL);
      if ( v12 )
      {
        v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v12, ResultLength, &ResultLength);
        if ( v10 >= 0 )
        {
          if ( v12[1] == 3 )
          {
            if ( a4 )
            {
              v13 = v12[2];
              if ( v13 > v11 )
                v10 = -1073741789;
              else
                memmove(a4, v12 + 3, v13);
            }
          }
          else
          {
            v10 = -1073741788;
          }
        }
        if ( v7 && (!v10 || v10 == -1073741789) )
          *v7 = v12[2];
        Win32FreePool(v12);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    v10 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v10 != -1073741772 && ResultLength )
    {
      *v7 = ResultLength;
      return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v10;
}
