void __fastcall InteractiveControlDevice::SetMessagePromotionType(__int64 a1, int a2)
{
  int v4; // ebx
  int v5; // r8d
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 64) != a2 )
  {
    v4 = 0;
    if ( a2 && (unsigned int)(a2 - 1) <= 1 )
    {
      v5 = 0;
      v4 = 1;
    }
    else
    {
      v5 = *((_DWORD *)InteractiveControlManager::Instance(a1) + 27);
    }
    v6 = v4;
    *(_DWORD *)(a1 + 64) = a2;
    InteractiveControlDevice::SetComponentResolution(a1, 3, v5, &v6);
  }
}
