__int64 __fastcall anonymous_namespace_::SetProcessPriorityByClass(__int64 *a1, int a2)
{
  int v4; // ecx
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  bool v10; // zf

  v4 = (*((_DWORD *)a1 + 203) >> 17) & 3;
  if ( a2 != v4 )
  {
    v5 = *a1;
    if ( a2 )
    {
      v6 = a2 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          goto LABEL_7;
        v10 = v4 == 1;
        v8 = *a1;
        if ( v10 )
        {
          v7 = 2LL;
          goto LABEL_6;
        }
        PsSetProcessPriorityByClass(v8, 1LL);
        v7 = 2LL;
      }
      else
      {
        v7 = 1LL;
      }
    }
    else
    {
      v7 = 0LL;
    }
    v8 = v5;
LABEL_6:
    result = PsSetProcessPriorityByClass(v8, v7);
LABEL_7:
    *((_DWORD *)a1 + 203) ^= (*((_DWORD *)a1 + 203) ^ (a2 << 17)) & 0x60000;
  }
  return result;
}
