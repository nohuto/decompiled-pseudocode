unsigned __int64 __fastcall IovpValidateStatusInformation(__int64 a1, __int64 a2, __int64 a3, const void *a4)
{
  unsigned __int64 result; // rax

  result = *(unsigned int *)(a2 + 16);
  if ( (result & 0x10) != 0 && (result & 0x40) != 0 && (result & 0x20) != 0 )
  {
    result = *(unsigned int *)(a2 + 48);
    if ( (_DWORD)result != -2147483626 )
    {
      result = (unsigned int)result & 0xC0000000;
      if ( (_DWORD)result != -1073741824 )
      {
        if ( *(_BYTE *)a3 == 3
          || *(_BYTE *)a3 == 5
          || *(_BYTE *)a3 == 7
          || *(_BYTE *)a3 == 10
          || *(_BYTE *)a3 == 12
          || *(_BYTE *)a3 == 13 )
        {
LABEL_15:
          result = *(unsigned int *)(a3 + 8);
          goto LABEL_16;
        }
        if ( *(_BYTE *)a3 != 14 && *(_BYTE *)a3 != 15 )
        {
          if ( *(_BYTE *)a3 != 25 )
            return result;
          goto LABEL_15;
        }
        result = *(_QWORD *)(a1 + 200);
        if ( result && result == *(_QWORD *)(a2 + 24) )
        {
          result = *(unsigned int *)(a1 + 208);
LABEL_16:
          if ( *(_QWORD *)(a2 + 56) > result )
            return ViErrorReport1(0x312u, a4, (const void *)a2);
        }
      }
    }
  }
  return result;
}
