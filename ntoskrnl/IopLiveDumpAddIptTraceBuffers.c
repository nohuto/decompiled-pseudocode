__int64 __fastcall IopLiveDumpAddIptTraceBuffers(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int128 v6; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int16 *v7[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v8; // [rsp+40h] [rbp-10h]
  int v9; // [rsp+42h] [rbp-Eh]
  __int16 v10; // [rsp+46h] [rbp-Ah]
  unsigned int v11; // [rsp+70h] [rbp+20h] BYREF

  v6 = 0LL;
  v9 = 0;
  v3 = 0;
  v10 = 0;
  v11 = 0;
  if ( IptInterface )
  {
    v7[1] = (unsigned __int16 *)qword_140D1EFE8[0];
    v7[0] = (unsigned __int16 *)KeActiveProcessors;
    v8 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v7) )
    {
      if ( (*(int (__fastcall **)(_QWORD, __int128 *))(IptInterface + 16))(v11, &v6) >= 0 )
      {
        v4 = MmAddRangeToCrashDump(a2, v6, *((__int64 *)&v6 + 1));
        if ( v4 < 0 )
        {
          if ( v4 == -1073741789 )
            return 0LL;
          v3 = v4;
        }
      }
    }
  }
  return v3;
}
