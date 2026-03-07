__int64 __fastcall GreBeginGdiRenderingToDxSurface(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rdi
  HDC v10; // rdx
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64); // rax
  unsigned int v13; // eax
  DC *v14[5]; // [rsp+20h] [rbp-28h] BYREF
  char v15; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 && (int)GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, 0LL) < 0 )
    return 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  LOBYTE(v6) = 5;
  v7 = 0;
  v8 = HmgShareLockCheck(a1, v6);
  if ( v8 )
  {
    if ( (a1 & 0x800000) == 0 )
    {
      if ( (unsigned int)GreGetObjectOwner(a1, 5LL) )
      {
        v9 = *(_QWORD *)(v8 + 48);
        if ( (*(_DWORD *)(v8 + 116) & 8) != 0 || *(_QWORD *)(v8 + 224) )
        {
          v10 = *(HDC *)(v8 + 160);
          *(_WORD *)(v8 + 102) &= ~0x200u;
          if ( v10 )
          {
            DCOBJ::DCOBJ((DCOBJ *)v14, v10);
            if ( v14[0] )
            {
              v7 = DC::bReset(v14[0]);
              if ( v14[0] )
                XDCOBJ::vUnlockFast((XDCOBJ *)v14);
            }
            if ( v7 && (*(_DWORD *)(v8 + 116) & 8) != 0 )
            {
              v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v9 + 3456);
              v7 = 0;
              if ( v12 )
              {
                v13 = v12(v8 + 24, a2, a3);
                *(_DWORD *)(v8 + 116) |= 0x200u;
                v7 = v13;
              }
            }
          }
        }
      }
    }
    DEC_SHARE_REF_CNT(v8);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  return v7;
}
