__int64 __fastcall SaveScreen(struct tagWND *a1, unsigned int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  __int64 v9; // rdx
  int v10; // eax
  int v11; // r8d
  int v12; // eax
  __m128i v14; // [rsp+20h] [rbp-48h] BYREF
  int v15[4]; // [rsp+30h] [rbp-38h] BYREF

  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v9 + 42) & 0x2FFF) == 0x29D )
  {
    v10 = 0;
    v11 = 1;
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 88);
    v11 = 0;
  }
  v15[0] = a4 + v10;
  v15[2] = a4 + a6;
  if ( v11 )
    v12 = 0;
  else
    v12 = *(_DWORD *)(v9 + 92);
  v15[3] = a7 + a5;
  v15[1] = a5 + v12;
  v14 = *GetScreenRect(&v14);
  if ( (unsigned int)IntersectRect(v15, v15, v14.m128i_i32) )
    return GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), a2, a3);
  else
    return 0LL;
}
