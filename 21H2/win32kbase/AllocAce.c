/*
 * XREFs of AllocAce @ 0x1C0029FE0
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C002A140 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C02989B0 (InitSecurity.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

char *__fastcall AllocAce(void *Src, char a2, char a3, int a4, PSID Sid, _DWORD *a6)
{
  ULONG v8; // r13d
  ULONG v9; // esi
  size_t v10; // rdi
  int v11; // ebp
  int v12; // eax
  char *v13; // rbx
  char *v14; // rdx

  v8 = RtlLengthSid(Sid);
  v9 = v8 + 8;
  if ( Src )
  {
    v10 = (unsigned int)*a6;
    if ( v9 + (unsigned int)v10 >= (unsigned int)v10 )
    {
      v11 = -1073741637;
      v12 = qword_1C0257D30 ? qword_1C0257D30() : -1073741637;
      v13 = v12 >= 0 && qword_1C0257D38 ? (char *)qword_1C0257D38(41LL, v9 + (unsigned int)v10, 1702064981LL) : 0LL;
      if ( v13 )
      {
        memmove(v13, Src, v10);
        if ( qword_1C0257D00 )
          v11 = qword_1C0257D00();
        if ( v11 >= 0 )
        {
          if ( qword_1C0257D08 )
            qword_1C0257D08(Src);
        }
        goto LABEL_14;
      }
    }
  }
  else
  {
    LODWORD(v10) = 0;
    v13 = (char *)Win32AllocPoolWithQuota(v9, 0x65737355u);
    if ( v13 )
    {
LABEL_14:
      *a6 = v9 + v10;
      v14 = &v13[(unsigned int)v10];
      *v14 = a2;
      v14[1] = a3;
      *((_WORD *)v14 + 1) = v9;
      *((_DWORD *)v14 + 1) = a4;
      RtlCopySid(v8, v14 + 8, Sid);
      return v13;
    }
  }
  return 0LL;
}
