__int64 __fastcall bDynamicIntersectVisRect(struct SURFACE *a1, struct tagSIZE a2)
{
  LONG cx; // ebx
  unsigned int v4; // esi
  HDC v5; // rcx
  DC *v6; // rdi
  __int64 v8; // [rsp+30h] [rbp-10h] BYREF
  char v9; // [rsp+38h] [rbp-8h]
  LONG cy; // [rsp+7Ch] [rbp+3Ch]
  DC *v11; // [rsp+80h] [rbp+40h] BYREF

  cy = a2.cy;
  v11 = 0LL;
  cx = a2.cx;
  v4 = HmgSafeNextObjt(0LL, 1, &v11);
  if ( !v4 )
    return 1LL;
  while ( 1 )
  {
    if ( (unsigned int)Feature_3160330556__private_IsEnabledDeviceUsage() )
    {
      v6 = v11;
      if ( (*((_DWORD *)v11 + 9) & 0x2000) != 0 || *((struct SURFACE **)v11 + 62) != a1 )
        goto LABEL_16;
      DC::AcquireDcVisRgnShared(v11, (__int64)&v8);
      if ( !*((_QWORD *)v6 + 142) )
      {
        if ( v9 )
        {
          v9 = 0;
          GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v8 + 1112));
        }
        goto LABEL_16;
      }
      if ( v9 )
      {
        v9 = 0;
        GreInnermostPushLockMSRC85333::ReleaseLock((GreInnermostPushLockMSRC85333 *)(v8 + 1112));
      }
      v5 = *(HDC *)v6;
    }
    else
    {
      if ( (*((_DWORD *)v11 + 9) & 0x2000) != 0 || *((struct SURFACE **)v11 + 62) != a1 || !*((_QWORD *)v11 + 142) )
        goto LABEL_16;
      v5 = *(HDC *)v11;
    }
    if ( !(unsigned int)GreIntersectVisRect(v5, 0, 0, cx, cy) )
      return 0LL;
LABEL_16:
    v4 = HmgSafeNextObjt(v4, 1, &v11);
    if ( !v4 )
      return 1LL;
  }
}
