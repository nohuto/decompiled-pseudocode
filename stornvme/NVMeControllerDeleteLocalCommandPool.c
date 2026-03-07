void __fastcall NVMeControllerDeleteLocalCommandPool(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v5 = 0LL;
    v1 = a1 + 4512;
    if ( a1 != -4512 )
    {
      while ( !(unsigned int)StorPortExtendedFunction(37LL, a1, v1, &v5) && v5 )
      {
        v4 = v5 - 112;
        if ( v5 != 112 )
        {
          if ( *(_QWORD *)(v4 + 96) )
            NVMeFreeDmaBuffer(a1, 4256LL, v4 + 96, *(_QWORD *)(v4 + 104));
          StorPortExtendedFunction(1LL, a1, v4, v3);
        }
      }
    }
  }
}
