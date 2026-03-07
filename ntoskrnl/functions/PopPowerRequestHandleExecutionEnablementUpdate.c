__int64 PopPowerRequestHandleExecutionEnablementUpdate()
{
  int v0; // ecx

  v0 = 8;
  if ( PopPowerRequestConvertSystemToExecution )
    v0 = 10;
  if ( PopExecutionRequiredTimeout
    && (!byte_140C3F253
     || PopPowerRequestActiveAudioEnablesExecutionRequired && byte_140C3F252
     || byte_140C3F251
     || MEMORY[0xFFFFF78000000008] - qword_140C3F258 < 10000000
                                                     * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout) )
  {
    return PopPowerRequestUnrevokeRequests(v0);
  }
  else
  {
    return PopPowerRequestRevokeRequests(v0, 0);
  }
}
