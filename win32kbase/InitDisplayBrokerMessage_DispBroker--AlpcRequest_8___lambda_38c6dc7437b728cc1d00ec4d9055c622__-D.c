__int64 __fastcall InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622___DrvSampleDisplayState_(
        _WORD *a1,
        unsigned int **a2,
        __int16 a3)
{
  __int64 result; // rax
  int v7; // r9d
  __int16 v8; // di

  memset(a1, 0, 0x50uLL);
  *((_DWORD *)a1 + 10) = 8;
  *((_DWORD *)a1 + 11) = 1;
  result = DrvSampleDisplayState((_DWORD *)a1 + 12);
  v7 = 0;
  if ( (int)result >= 0 )
  {
    v8 = a3 + 80;
    a1[1] = v8;
    *a1 = v8 - 40;
    a1[2] = 0x8000;
    *((_DWORD *)a1 + 16) = **a2;
    *((_DWORD *)a1 + 17) = *a2[1];
    *((_DWORD *)a1 + 18) = *a2[2];
    LOBYTE(v7) = *(_BYTE *)a2[3] != 0;
    *((_DWORD *)a1 + 19) = v7;
    memmove(a1 + 40, *(const void **)a2[4], 216LL * **a2);
    return 0LL;
  }
  return result;
}
