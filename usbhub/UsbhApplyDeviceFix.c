_DWORD *__fastcall UsbhApplyDeviceFix(__int64 a1, __int64 a2, int a3)
{
  _DWORD *result; // rax
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi

  FdoExt(a1);
  result = PdoExt(a2);
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 2;
            if ( v11 )
            {
              v12 = v11 - 3;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  if ( v13 == 1 )
                    result[358] |= 0x20000u;
                }
                else
                {
                  result[358] |= 0x10000u;
                }
              }
              else
              {
                result[358] &= ~0x2000u;
              }
            }
            else
            {
              result[358] |= 0x8000u;
            }
          }
          else
          {
            result[358] |= 0x4000u;
          }
        }
        else
        {
          result[358] |= 0x2000u;
        }
      }
      else
      {
        result[358] |= 0x1000u;
      }
    }
    else
    {
      result[358] |= 0x200u;
    }
  }
  else
  {
    result[358] &= ~0x200u;
  }
  return result;
}
