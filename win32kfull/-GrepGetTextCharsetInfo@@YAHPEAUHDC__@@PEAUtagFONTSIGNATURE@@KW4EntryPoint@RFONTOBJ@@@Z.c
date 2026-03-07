__int64 __fastcall GrepGetTextCharsetInfo(HDC a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  _DWORD v13[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-18h] BYREF
  Gre::Base *v15; // [rsp+78h] [rbp+28h] BYREF

  v7 = (unsigned int)GreGetCharSet(a1) >> 16;
  if ( !a2 )
    return v7;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( v14[0] )
  {
    v9 = *(unsigned __int16 *)(v14[0] + 12LL);
    v15 = 0LL;
    v13[1] = v9;
    v13[0] = a4;
    if ( (unsigned int)RFONTOBJ::bInit(&v15, (struct XDCOBJ *)v14, 0, 2u, (const struct RFONTOBJ::Tag *)v13) )
      GreAcquireSemaphore(*((_QWORD *)v15 + 63));
    if ( v15 )
    {
      v10 = *((_QWORD *)v15 + 15);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 32);
        if ( *(_DWORD *)(v11 + 4) > 4u && (v12 = *(int *)(v11 + 196), (_DWORD)v12) )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v12 + v11);
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(v12 + v11 + 16);
        }
        else
        {
          *(_OWORD *)a2 = 0LL;
          *(_DWORD *)(a2 + 16) = 0;
          *(_DWORD *)(a2 + 20) = 0;
        }
        goto LABEL_11;
      }
      EngSetLastError(6u);
    }
    v7 = 1;
LABEL_11:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
    goto LABEL_12;
  }
  EngSetLastError(6u);
  v7 = 1;
LABEL_12:
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v7;
}
