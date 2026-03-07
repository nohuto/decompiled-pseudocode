void ACPIPccProcessSci()
{
  unsigned int i; // edi
  _BYTE *v1; // rbx

  if ( AcpiPccSciReferenceCount )
  {
    if ( AcpiPccLegacySubspace
      && *(_DWORD *)(AcpiPccLegacySubspace + 432)
      && (**(_WORD **)(AcpiPccLegacySubspace + 56) & 2) != 0 )
    {
      AcpiPccCommandComplete(AcpiPccLegacySubspace);
    }
    if ( AcpiPccSubspaces )
    {
      for ( i = 0; i < AcpiPccSubspaceCount; ++i )
      {
        v1 = (_BYTE *)(AcpiPccSubspaces + 656LL * i);
        if ( ((*v1 + 1) & 0xFE) == 0 && *((_QWORD *)v1 + 7) )
        {
          if ( *((_DWORD *)v1 + 108) && (**((_WORD **)v1 + 7) & 2) != 0 )
            AcpiPccCommandComplete(AcpiPccSubspaces + 656LL * i);
          if ( (**((_WORD **)v1 + 7) & 8) != 0 )
            AcpiPccPlatformNotification(v1);
        }
      }
    }
  }
}
