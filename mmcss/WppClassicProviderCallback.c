void __fastcall WppClassicProviderCallback(__int64 a1, unsigned __int8 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rax

  if ( a2 <= 1u )
  {
    if ( a2 )
    {
      *(_DWORD *)(a4 + 44) = *((_DWORD *)a3 + 1);
      *(_BYTE *)(a4 + 41) = *((_BYTE *)a3 + 2);
      v4 = *a3;
    }
    else
    {
      v4 = 0LL;
      *(_BYTE *)(a4 + 41) = 0;
      *(_DWORD *)(a4 + 44) = 0;
    }
    *(_QWORD *)(a4 + 24) = v4;
  }
}
