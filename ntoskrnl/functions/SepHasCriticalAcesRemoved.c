int __fastcall SepHasCriticalAcesRemoved(void *a1, void *a2, _BYTE *a3, _BYTE *a4)
{
  __int64 AclSize; // rax
  PACL v9; // r14
  PACL v10; // rdi
  PACL v11; // r15
  unsigned int v12; // ecx
  bool v13; // zf
  ACL *v14; // rdx
  unsigned int v15; // r14d
  PACL v16; // rbx
  unsigned int i; // r13d
  _WORD v19[2]; // [rsp+20h] [rbp-20h] BYREF
  __int16 v20; // [rsp+24h] [rbp-1Ch]
  unsigned int v21; // [rsp+28h] [rbp-18h]
  int v22; // [rsp+2Ch] [rbp-14h] BYREF
  PACL Dacl; // [rsp+30h] [rbp-10h] BYREF
  PACL v24; // [rsp+38h] [rbp-8h] BYREF
  BOOLEAN DaclPresent; // [rsp+90h] [rbp+50h] BYREF
  __int16 DaclDefaulted; // [rsp+98h] [rbp+58h] BYREF

  Dacl = 0LL;
  v24 = 0LL;
  DaclPresent = 0;
  v19[0] = 0;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  LODWORD(AclSize) = RtlGetDaclSecurityDescriptor(a1, &DaclPresent, &Dacl, (PBOOLEAN)&DaclDefaulted);
  if ( (int)AclSize >= 0 )
  {
    if ( DaclPresent )
    {
      v9 = Dacl;
      if ( Dacl )
      {
        LODWORD(AclSize) = RtlGetControlSecurityDescriptor(a1, v19, &v22);
        if ( (int)AclSize >= 0 )
        {
          DaclPresent = 0;
          v20 = v19[0] & 0x400;
          RtlGetDaclSecurityDescriptor(a2, &DaclPresent, &v24, (PBOOLEAN)&DaclDefaulted);
          RtlGetControlSecurityDescriptor(a2, v19, &v22);
          v10 = v9 + 1;
          v22 = 0;
          LODWORD(AclSize) = v9->AceCount;
          DaclDefaulted = v19[0] & 0x400;
          v19[0] &= 0x1000u;
          v21 = AclSize;
          if ( (_DWORD)AclSize )
          {
            v11 = v24;
            v12 = AclSize;
            while ( 1 )
            {
              if ( v10->AclRevision <= 3u )
              {
                v13 = (v10->Sbz1 & 0x20) == 0;
                v14 = v10 + 1;
                LODWORD(AclSize) = *(_DWORD *)&v10->AceCount;
                LODWORD(Dacl) = AclSize;
                if ( !v13 )
                  break;
              }
LABEL_11:
              v10 = (PACL)((char *)v10 + v10->AclSize);
              LODWORD(AclSize) = v22 + 1;
              v22 = AclSize;
              if ( (unsigned int)AclSize >= v12 )
                return AclSize;
            }
            if ( DaclPresent )
            {
              if ( v11 )
              {
                v15 = 0;
                v16 = v11 + 1;
                for ( i = v11->AceCount; v15 < i; v16 = (PACL)((char *)v16 + AclSize) )
                {
                  if ( v16->AclRevision <= 3u && (v16->Sbz1 & 0x20) != 0 )
                  {
                    if ( RtlEqualSid(&v16[1], v14) && *(_DWORD *)&v16->AceCount == (_DWORD)Dacl )
                    {
                      v12 = v21;
                      goto LABEL_11;
                    }
                    v14 = v10 + 1;
                  }
                  AclSize = v16->AclSize;
                  ++v15;
                }
              }
            }
            *a3 = 1;
            if ( a4 && v20 && DaclDefaulted && v19[0] )
              *a4 = 1;
          }
        }
      }
    }
  }
  return AclSize;
}
