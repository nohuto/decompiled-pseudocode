__int64 __fastcall GreGetPerBandInfo(HDC a1, struct _PERBANDINFO *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, struct _PERBANDINFO *); // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  a2->bRepeatThisBand = 0;
  v3 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v9) )
  {
LABEL_8:
    v4 = v9[0];
    goto LABEL_9;
  }
  v4 = v9[0];
  v5 = *(_QWORD *)(v9[0] + 496LL);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v9[0] + 48LL);
    if ( *(_QWORD *)(v6 + 2536) )
    {
      if ( (*(_DWORD *)(v5 + 112) & 0x2000000) != 0 )
      {
        v7 = *(__int64 (__fastcall **)(__int64, struct _PERBANDINFO *))(v6 + 3264);
        if ( v7 )
        {
          v3 = v7(v5 + 24, a2);
          if ( v3 == -1 )
            v3 = -1;
          goto LABEL_8;
        }
        v3 = 0;
      }
    }
  }
LABEL_9:
  if ( v4 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  return v3;
}
