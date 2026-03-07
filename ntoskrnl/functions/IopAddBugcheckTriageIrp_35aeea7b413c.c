__int64 __fastcall IopAddBugcheckTriageIrp(__int64 MaxDataSize, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  int v6; // esi
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  int v9; // r14d
  int v10; // r13d
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r15
  char v14; // si
  int v15; // eax
  int v17; // [rsp+70h] [rbp+18h]
  unsigned __int64 v18; // [rsp+78h] [rbp+20h]

  v17 = 0;
  v4 = 0;
  if ( !KiIsAddressRangeValid(MaxDataSize, 208LL) )
    return (unsigned int)-1073741823;
  v5 = *(unsigned __int16 *)(MaxDataSize + 2);
  if ( (unsigned __int16)v5 > 0x800u
    || (v6 = *(char *)(MaxDataSize + 66), *(char *)(MaxDataSize + 66) > 64)
    || (v7 = (unsigned __int64)(v5 + 7) >> 3,
        v8 = *(unsigned __int16 *)(MaxDataSize + 2),
        !KiIsAddressRangeValid(MaxDataSize, 8 * v7)) )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0xD0);
    return (unsigned int)-1073741823;
  }
  IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)(unsigned int)(8 * v7));
  if ( a2 == 1 )
  {
    v9 = 0;
    v10 = v6;
    if ( (char)v6 > 0 )
    {
      v11 = v8 + MaxDataSize;
      v18 = v8 + MaxDataSize;
      while ( MaxDataSize + 280 + 72LL * (char)v9 <= v11 )
      {
        v12 = *(_QWORD *)(MaxDataSize + 72LL * (char)v9 + 248);
        v13 = 0LL;
        v14 = 0;
        if ( v12 )
        {
          v15 = v17;
          while ( 1 )
          {
            v17 = v15 + 1;
            if ( !KiIsAddressRangeValid(v12, 336LL) )
              break;
            v13 = *(_QWORD *)(v12 + 312);
            if ( !KiIsAddressRangeValid(v13, 112LL) )
              break;
            v12 = *(_QWORD *)(v13 + 48);
            if ( !v12 )
            {
              v14 = 1;
              goto LABEL_18;
            }
            v15 = v17;
            if ( v17 >= 10 )
              goto LABEL_18;
          }
          v4 = -1073741823;
LABEL_18:
          if ( v14 )
            v4 = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(v13 + 40));
          v11 = v18;
        }
        if ( ++v9 >= v10 )
          return v4;
      }
      return (unsigned int)-1073741823;
    }
  }
  return v4;
}
