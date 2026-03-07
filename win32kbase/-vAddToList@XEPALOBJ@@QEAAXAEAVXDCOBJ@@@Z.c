void __fastcall XEPALOBJ::vAddToList(XEPALOBJ *this, struct XDCOBJ *a2)
{
  int v4; // r8d
  HDC v5; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)XEPALOBJ::bIsPalDefault(this) )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 984LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
    *(_QWORD *)(*(_QWORD *)a2 + 984LL) = *(_QWORD *)(*(_QWORD *)this + 40LL);
    *(_QWORD *)(*(_QWORD *)this + 40LL) = **(_QWORD **)a2;
    *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
    v5 = *(HDC *)(*(_QWORD *)a2 + 984LL);
    if ( v5 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v6, v5, v4);
      if ( v6[0] )
      {
        *(_QWORD *)(v6[0] + 992LL) = **(_QWORD **)a2;
        XDCOBJ::vAltUnlockFast((XDCOBJ *)v6);
      }
    }
  }
}
