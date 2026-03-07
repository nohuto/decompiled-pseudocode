__int64 __fastcall CmpVerifyLogRecord(__int64 a1, unsigned int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 result; // rax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax

  if ( a2 >= 0x30 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v3 <= a2 && v3 >= 0x30 && *(_DWORD *)a1 == (unsigned int)HvBufferCheckSum(a1, v3) )
    {
      v4 = *(_DWORD *)(a1 + 12);
      if ( v4 < 0xB )
      {
        if ( v4 <= 5 )
        {
          if ( v4 == 5 )
          {
LABEL_12:
            result = CmpVerifySetOrDeleteValueLogRecord(a1);
            goto LABEL_14;
          }
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( v6 )
              {
                if ( v6 - 1 <= 1 )
                  goto LABEL_12;
LABEL_21:
                __fastfail(5u);
              }
            }
            result = CmpVerifyCreateOrDeleteKeyLogRecord(a1);
            goto LABEL_14;
          }
          return 0LL;
        }
        v8 = v4 - 6;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( !v11 )
              {
                result = CmpVerifyRenameKeyLogRecord(a1);
                goto LABEL_14;
              }
              if ( v11 != 1 )
                goto LABEL_21;
            }
            result = CmpVerifySetSecurityDescriptorLogRecord(a1);
LABEL_14:
            if ( (int)result < 0 )
              return result;
            return 0LL;
          }
        }
        if ( v3 >= 0x38 )
        {
          v12 = *(unsigned __int16 *)(a1 + 32);
          if ( (v12 & 1) == 0 )
          {
            v13 = v12 + 56;
            if ( v13 >= 0x38 && v3 >= v13 )
              return 0LL;
          }
        }
      }
    }
  }
  return 3222863920LL;
}
