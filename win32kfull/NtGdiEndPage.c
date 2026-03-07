__int64 __fastcall NtGdiEndPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // r14d
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  Gre::Base *v7; // rcx
  XDCOBJ *v8; // rbx
  int v9; // eax
  EWNDOBJ *v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  XDCOBJ *v13; // [rsp+58h] [rbp+28h] BYREF

  v1 = (int)a1;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v12) || (v3 = v1 & 0x7F0000, v3 == 0x10000) || v3 == 6684672 )
  {
LABEL_20:
    v4 = v12[0];
    goto LABEL_21;
  }
  v4 = v12[0];
  v5 = *(_QWORD *)(v12[0] + 496LL);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v12[0] + 48LL);
    v7 = (Gre::Base *)*(unsigned int *)(v6 + 40);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      if ( *(_QWORD *)(v6 + 2536) )
      {
        v8 = 0LL;
        v13 = 0LL;
        if ( ((unsigned __int16)v7 & 0x8000) != 0 )
        {
          v9 = *(_DWORD *)(v12[0] + 44LL);
          v8 = (XDCOBJ *)v12;
          v13 = (XDCOBJ *)v12;
          if ( (v9 & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v12);
            *(_DWORD *)(v12[0] + 44LL) &= ~2u;
          }
        }
        if ( !UmpdSecurityGateNoUmpdObj(v7) || *(_QWORD *)(v6 + 2920) )
        {
          v2 = (*(__int64 (__fastcall **)(__int64))(v6 + 2920))(v5 + 24);
          if ( v2 )
          {
            RESTORESAVEDCATTRS::vDone(&v13);
            if ( (*(_DWORD *)(v6 + 40) & 0x8000) != 0 )
            {
              *(_DWORD *)(v12[0] + 36LL) &= ~0x100u;
              v10 = *(EWNDOBJ **)(v5 + 136);
              if ( v10 )
              {
                GreDeleteWnd(v10);
                *(_QWORD *)(v5 + 136) = 0LL;
              }
              *(_WORD *)(v12[0] + 2088LL) = -1;
            }
            v8 = v13;
          }
        }
        if ( v8 )
          XDCOBJ::vSaveAttributesAlways(v8);
        goto LABEL_20;
      }
    }
  }
LABEL_21:
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v2;
}
