struct tagPROCESS_HID_REQUEST *__fastcall AllocateHidProcessRequest(__int16 a1, __int16 a2)
{
  struct tagPROCESS_HID_REQUEST *result; // rax

  result = (struct tagPROCESS_HID_REQUEST *)Win32AllocPoolWithQuotaZInit(48LL, 1382576981LL);
  if ( result )
  {
    *((_DWORD *)result + 5) &= 0xFFFFFFF0;
    *((_WORD *)result + 8) = a1;
    *((_WORD *)result + 9) = a2;
    *((_QWORD *)result + 3) = 0LL;
    *((_QWORD *)result + 4) = 0LL;
    *((_QWORD *)result + 5) = 0LL;
  }
  return result;
}
