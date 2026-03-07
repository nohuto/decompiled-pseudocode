__int64 __fastcall GreEndGdiRenderingToDxSurface(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r15d
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // ecx
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64, __int64); // rax
  char v15; // [rsp+60h] [rbp+18h] BYREF

  v6 = a2;
  if ( a3 )
  {
    LOBYTE(a2) = 1;
    GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, a2);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  LOBYTE(v8) = 5;
  v9 = 0;
  v10 = HmgShareLockCheck(a1, v8);
  if ( v10 )
  {
    if ( (a1 & 0x800000) == 0 )
    {
      if ( (unsigned int)GreGetObjectOwner(a1, 5LL) )
      {
        v11 = *(_QWORD *)(v10 + 48);
        v12 = *(_DWORD *)(v10 + 116) & 8;
        if ( v12 || *(_QWORD *)(v10 + 224) )
        {
          v9 = 1;
          *(_WORD *)(v10 + 102) |= 0x200u;
          if ( v12 )
          {
            v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v11 + 3464);
            v9 = 0;
            if ( v14 )
              v9 = v14(v10 + 24, v6, a4, a3);
          }
        }
      }
    }
    DEC_SHARE_REF_CNT(v10);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  return v9;
}
