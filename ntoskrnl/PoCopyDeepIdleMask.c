unsigned __int64 __fastcall PoCopyDeepIdleMask(unsigned __int16 *a1)
{
  size_t v2; // r8
  unsigned __int64 result; // rax
  bool v4; // cf
  unsigned int v5; // r10d
  int v6; // r10d
  int v7; // r11d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+2Ch] [rbp-Ch]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = 8LL * *a1;
  v13 = 0LL;
  result = (unsigned __int64)memset(a1 + 4, 0, v2);
  v4 = KeNumberNodes != 0;
  *a1 = 1;
  v5 = 0;
  if ( v4 )
  {
    do
    {
      v12 = 0;
      v10 = KeNodeBlock[v5];
      v11 = *(_DWORD *)(v10 + 16);
      while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v10, &v13) )
      {
        v8 = *(unsigned __int16 *)(v13 + 136);
        v9 = *(_QWORD *)(v13 + 64);
        if ( *a1 > (unsigned __int16)v8 )
          goto LABEL_7;
        if ( a1[1] > (unsigned __int16)v8 )
        {
          *a1 = v7 + v8;
LABEL_7:
          *(_QWORD *)&a1[4 * v8 + 4] |= v9;
        }
      }
      result = (unsigned __int16)KeNumberNodes;
      v5 = v7 + v6;
    }
    while ( v5 < (unsigned __int16)KeNumberNodes );
  }
  return result;
}
